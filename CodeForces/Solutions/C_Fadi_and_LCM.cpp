#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)      \
  for (ll i = 0; i < n; i++) \
    cin >> vec[i];
void solve()
{
  ll n;
  cin >> n;
  ll ans = LONG_LONG_MAX;
  for (ll i = 1; i * i <= n; i++)
  {
    ll j = n / i;
    if (gcd(i, j) == 1 && n % i == 0 && n % j == 0)
    {
      ans = min(ans, max(i, j));
    }
  }
  cout << min(ans, n / ans) << " " << max(ans, n / ans) << endl;
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