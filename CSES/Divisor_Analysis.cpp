#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
// #define fori(i, n, vec)
ll MOD = 1000000007;
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

void solve()
{
  ll n;
  cin >> n;
  vector<pair<ll, ll>> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i].first >> arr[i].second;
  }
  ll ans1 = 1;
  for (auto it : arr)
  {
    ans1 = ((ans1) * (it.second + 1)) % MOD;
  }
  ll sum = 1;
  for (auto it : arr)
  {
    ll temp = expo(it.first, it.second + 1, MOD);
    temp = (temp - 1 + MOD) % MOD;
    ll deno = it.first - 1;
    sum *= mod_div(temp, deno, MOD);
    sum %= MOD;
  }
  ll num = 1;
  ll pro = 1;
  for (auto it : arr)
  {
    pro = expo(pro, it.second + 1, MOD);
    ll temp = (it.second * (it.second + 1)) / 2;
    ll base = expo(it.first, temp, MOD);
    ll val = expo(base, num, MOD);
    pro *= val;
    pro %= MOD;
    num *= (it.second + 1);
    num %= (MOD - 1);
  }
  cout << ans1 % MOD << " " << sum % MOD << " " << pro % MOD << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}