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
  ll n, q;
  cin >> n >> q;
  vector<pair<ll, ll>> arr(n);
  ll maxi = LONG_LONG_MIN;
  vector<ll> pre(n);
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    maxi = max(maxi, x);
    arr[i].first = maxi;
    arr[i].second = i;
    if (i == 0)
    {
      pre[i] = x;
    }
    else
    {
      pre[i] = pre[i - 1] + x;
    }
  }
  sort(arr.begin(), arr.end());
  while (q--)
  {
    ll y;
    cin >> y;
    pair<ll, ll> temp = {y + 1, LONG_LONG_MIN};
    auto ele = lower_bound(arr.begin(), arr.end(), temp);
    ele--;
    if (ele->second >= 0 && ele->second < n)
    {
      cout << pre[ele->second] << " ";
    }
    else
    {
      cout << 0 << " ";
    }
  }
  cout << endl;
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