#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
ll expo(ll a, ll b, ll mod)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = (res * a) % mod;
    a = (a * a) % mod;
    b = b >> 1;
  }
  return res;
}
ll mminvprime(ll a, ll b) { return expo(a, b - 2, b); }
ll mod_mul(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m)
{
  a = a % m;
  b = b % m;
  return (mod_mul(a, mminvprime(b, m), m) + m) % m;
} // only for prime m
vector<ll> sieve(int n)
{
  vector<bool> isPrime(n + 1, true);
  vector<ll> prime;
  isPrime[0] = isPrime[1] = false;
  for (ll i = 2; i <= n; i++)
  {
    if (isPrime[i])
    {
      prime.push_back(i);
      for (ll j = i * i; j <= n; j += i)
      {
        isPrime[j] = false;
      }
    }
  }
  return prime;
}
vector<pair<int, int>> primeFactorisation(int x, vector<int> &spf)
{
  vector<pair<int, int>> ans;
  while (x != 1)
  {
    int cnt = 0;
    while (x % spf[x] == 0)
    {
      cnt++;
      x /= spf[x];
    }
    ans.push_back({spf[x], cnt});
  }
  return ans;
}
vector<ll> smallprime(ll n)
{
  int maxN = 1e6;
  vector<bool> isPrime(maxN, true);
  vector<ll> spf(1e6, 1e9);
  for (ll i = 2; i * i < maxN; i++)
  {
    if (isPrime[i])
    {
      spf[i] = i;
      for (ll j = i * i; j < maxN; j += i)
      {
        isPrime[j] = false;
        spf[j] = min(spf[j], i);
      }
    }
  }
  return spf;
}
void solve()
{
  int a, b;
  cin >> a >> b;
  if (a >= b)
  {
    cout << (b / 2) * 3 << endl;
  }
  else
  {
    int ans = 0;
    for (int i = 1; i <= a; i++)
    {
      if (2 * i <= b)
      {
        ans = 3 * i;
      }
      else
      {
        break;
      }
    }
    cout << ans << endl;
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}