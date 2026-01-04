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
  vector<ll> arr(n);
  map<ll, ll> mp;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  ll maxi = INT_MIN;
  ll ans = 0;
  for (auto it : mp)
  {
    maxi = max(maxi, it.second);
    if (it.first != 1)
    {
      ans += it.second;
    }
  }
  cout << min(ans, 1 + mp[1] + ans - maxi) << endl;
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