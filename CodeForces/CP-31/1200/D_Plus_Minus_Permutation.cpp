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
  ll n, x, y;
  cin >> n >> x >> y;
  ll k = (n / x) - (n / lcm(x, y));
  y = (n / y) - n / (lcm(x, y));
  cout << ((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2) - (y * (y + 1)) / 2 << endl;
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