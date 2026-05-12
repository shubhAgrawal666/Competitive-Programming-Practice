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
  ll p, q;
  cin >> p >> q;
  if (p < q)
  {
    cout << p << endl;
  }
  else
  {
    if (p % q != 0)
    {
      cout << p << endl;
    }
    else
    {
      ll ans = LLONG_MIN;
      for (ll i = (ll)sqrtl(p); i >= 2; i--)
      {
        if (p % i == 0)
        {
          ll sec = p / i;
          ll fir = i;
                }
      }
      // cout << ans << endl;
    }
  }
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