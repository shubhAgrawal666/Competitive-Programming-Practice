#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)      \
  for (ll i = 0; i < n; i++) \
    cin >> vec[i];
ll expo(ll a, ll b)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = (res * a);
    a = (a * a);
    b = b >> 1;
  }
  return res;
}
void solve()
{
  ll n, k;
  cin >> n >> k;
  if (n <= k)
  {
    cout << 1 << endl;
    return;
  }
  set<ll> fact;
  ll temp = n;
  for (ll i = 2; i * i <= temp; i++)
  {
    if (n % i == 0)
    {
      fact.insert(i);
      fact.insert(n / i);
    }
  }
  ll ans = 1;
  for (auto it : fact)
  {
    if (it <= k)
    {
      ans = max(ans, it);
    }
    else
    {
      break;
    }
  }
  cout << n / ans << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}