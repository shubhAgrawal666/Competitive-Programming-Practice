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
  ll ans = LONG_LONG_MIN;
  for (ll i = 1; i * i <= n; i++)
  {
    if (n % i == 0 && gcd(i, n / i) == 1)
    {
      ans = i;
    }
  }
  cout << min(n / ans, ans) << " " << max(ans, n / ans) << endl;
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