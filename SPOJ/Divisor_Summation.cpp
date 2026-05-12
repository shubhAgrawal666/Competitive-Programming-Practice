#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Speed
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

// Macros
#define IOtext                      \
  freopen("input.txt", "r", stdin); \
  freopen("output.txt", "w", stdout);
#define PI (3.141592653589)
#define M 1000000007
#define pb push_back
#define f first
#define s second
#define foreach(i, j, k, in) for (int i = j; i < k; i += in)
#define rforeach(i, j, k, in) for (int i = j; i >= k; i -= in)
#define rep(i, j) foreach (i, 0, j, 1)
#define rrep(i, j) rforeach(i, j, 0, 1)
#define set_bits(x) __builtin_popcountll(x)
#define zero_bits(x) __builtin_ctzll(x)
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define inint(x) \
  int x;         \
  cin >> x;
#define inll(x)    \
  long long int x; \
  cin >> x;
#define instr(x) \
  string x;      \
  cin >> x;
#define all(x) x.begin(), x.end()
#define out(x) cout << x << endl;
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define pm cout << "-1" << endl
#define ps(x, y) fixed << setprecision(y) << x

// Typedef
typedef long long ll;
typedef __int128 lll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef map<char, int> mci;
typedef set<int> st;

template <class T>
using ordered_set = tree<
    T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// Debug Overloads
#ifdef khnhcodingkarlo
#define debug(x) \
  _print(x);     \
  cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.f);
  cerr << ",";
  _print(p.s);
  cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

// Operator Overloads
template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
  for (auto &it : v)
    cin >> it;
  return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
  for (auto &it : c)
    cout << it << " ";
  return ostream;
}
ll moduloMultiplication(ll a, ll b, ll mod)
{
  ll res = 0;
  a %= mod;
  while (b)
  {
    if (b & 1)
      res = (res + a) % mod;
    b >>= 1;
  }
  return res;
}
ll power(ll x, ll y)
{
  ll res = 1;
  if (x == 0)
    return 0;
  while (y > 0)
  {
    if (y & 1)
      res = (res * x);
    y = y >> 1;
    x = (x * x);
  }
  return res;
}
// To find modulo inverse, call powermod(A,M-2,M)
vector<ll> spf(1000000, 1e9);
void solve()
{
  ll n;
  cin >> n;
  ll ans = 1;
  ll deno = 1;
  ll temp = n;
  while (n != 1)
  {
    ll prime = spf[n];
    ll cnt = 0;
    deno *= (prime - 1);
    while ((n % prime) == 0)
    {
      cnt++;
      n /= prime;
    }
    ans *= (power(prime, cnt + 1) - 1);
  }
  cout << ans / deno - temp << endl;
}
int32_t main()
{
  fastio()
      inint(t);
  for (ll i = 2; i < 1000000; i++)
  {
    if (spf[i] == 1e9)
    {
      spf[i] = i;
      for (ll j = i * i; j < 1000000; j += i)
      {
        spf[j] = min(i, spf[j]);
      }
    }
  }
  while (t--)
  {
    solve();
  }
  return 0;
}