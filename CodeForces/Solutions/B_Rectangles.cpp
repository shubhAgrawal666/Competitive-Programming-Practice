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

// Sorting
bool sorta(const pair<int, int> &a, const pair<int, int> &b) { return (a.second < b.second); }
bool sortd(const pair<int, int> &a, const pair<int, int> &b) { return (a.second > b.second); }

// Bits
string decToBinary(int n)
{
  string s = "";
  int i = 0;
  while (n > 0)
  {
    s = to_string(n % 2) + s;
    n = n / 2;
    i++;
  }
  return s;
}
ll binaryToDecimal(string n)
{
  string num = n;
  ll dec_value = 0;
  int base = 1;
  int len = num.length();
  for (int i = len - 1; i >= 0; i--)
  {
    if (num[i] == '1')
      dec_value += base;
    base = base * 2;
  }
  return dec_value;
}

// Check
bool isPrime(ll n)
{
  if (n <= 1)
    return false;
  if (n <= 3)
    return true;
  if (n % 2 == 0 || n % 3 == 0)
    return false;
  for (int i = 5; i * i <= n; i = i + 6)
    if (n % i == 0 || n % (i + 2) == 0)
      return false;
  return true;
}
bool isPowerOfTwo(int n)
{
  if (n == 0)
    return false;
  return (ceil(log2(n)) == floor(log2(n)));
}
bool isPerfectSquare(ll x)
{
  if (x >= 0)
  {
    ll sr = sqrt(x);
    return (sr * sr == x);
  }
  return false;
}

vector<ll> primes;
vector<bool> is_prime;
vector<ll> spf;
vector<ll> fact;
vector<ll> ifact;
// Mathematical functions

void Sieve(ll n)
{
  is_prime.assign(n + 1, true);
  spf.assign(n + 1, 1e9);
  is_prime[0] = is_prime[1] = false;
  for (ll i = 2; i <= n; i++)
  {
    if (is_prime[i])
    {
      spf[i] = i;
      for (ll j = i * i; j <= n; j += i)
      {
        is_prime[j] = false;
        spf[j] = min(spf[j], i);
      }
    }
  }
}

map<ll, ll> factors(ll n)
{
  map<ll, ll> ans;
  while (n > 1)
  {
    ll prime = spf[n];
    n /= prime;
    ans[prime]++;
  }
  return ans;
}

void get_primes(int n)
{
  for (int i = 2; i <= n; i++)
    if (is_prime[i])
      primes.push_back(i);
}

ll mod_pow(ll x, ll y, ll p)
{
  ll res = 1;
  x = x % p;
  if (x == 0)
    return 0;
  while (y > 0)
  {
    if (y & 1)
      res = (res * x) % p;
    y = y >> 1;
    x = (x * x) % p;
  }
  return res;
}

ll mod_add(ll a, ll b, ll m)
{
  a %= m;
  b %= m;
  return (a + b) % m;
}

ll mod_sub(ll a, ll b, ll m)
{
  a %= m;
  b %= m;
  return (((a - b) % m) + m) % m;
}
// FASTER BUT FAILS ON LARGER CONSTRAINTS
ll mod_mul(ll a, ll b, ll m)
{
  a %= m;
  b %= m;
  return (a * b) % m;
}

ll mod_div(ll a, ll b, ll m)
{
  a %= m;
  b %= m;
  return mod_mul(a, mod_pow(b, m - 2, m), m);
}

void fact_calc(ll n, ll MOD)
{
  fact.assign(n + 1, 0);
  ifact.assign(n + 1, 0);
  fact[0] = 1;
  for (int i = 1; i <= n; i++)
  {
    fact[i] = mod_mul(fact[i - 1], i, MOD);
    // ifact[i] = mod_div(1, fact[i], MOD);
  }
  ifact[n] = mod_div(1, fact[n], MOD);
  for (int i = n - 1; i >= 0; i--)
  {
    ifact[i] = mod_mul(ifact[i + 1], i + 1, MOD);
  }
}

ll nCr(ll n, ll r, ll MOD)
{
  return mod_mul(fact[n], mod_mul(ifact[r], ifact[n - r], MOD), MOD);
}

ll nPr(ll n, ll r, ll MOD)
{
  return mod_mul(fact[n], ifact[n - r], MOD);
}

ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
} //__gcd
ll lcm(ll a, ll b) { return (a / gcd(a, b) * b); }
// SLOWER BUT WORKS BETTER FOR LARGER CONSTRAINTS
ll moduloMultiplication(ll a, ll b, ll mod)
{
  ll res = 0;
  a %= mod;
  while (b)
  {
    if (b & 1)
      res = (res + a) % mod;

    a = (a + a) % mod; // important
    b >>= 1;
  }
  return res;
}

// To find modulo inverse, call powermod(A,M-2,M)
void solve()
{
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> arr(n, vector<ll>(m));
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  vector<ll> col0(m);
  vector<ll> col1(m);
  vector<ll> row0(n);
  vector<ll> row1(n);
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < m; j++)
    {
      if (arr[i][j] == 1)
      {
        row1[i]++;
        col1[j]++;
      }
      else
      {
        row0[i]++;
        col0[j]++;
      }
    }
  }
  ll ans = 0;
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < m; j++)
    {
      if (arr[i][j] == 0)
      {
        // cout << row0[i] << " " << col0[j] << endl;
        ans += (1LL << (row0[i] - 1)) + (1LL << (col0[j] - 1));
        row0[i]--;
        col0[j]--;
      }
      else
      {
        // cout << row1[i] << " " << col1[j] << endl;
        ans += (1LL << (row1[i] - 1)) + (1LL << (col1[j] - 1));
        row1[i]--;
        col1[j]--;
      }
    }
  }
  cout << ans - n * m << endl;
  // cout << row0 << endl;
  // cout << row1 << endl;
  // cout << col0 << endl;
  // cout << col1 << endl;
}

int32_t main()
{
  fastio() int t;
  t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}