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
  ll ans = 0;
  ll sum = 0;
  vector<ll> odd;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] % 2 == 1)
    {
      odd.push_back(arr[i]);
    }
    else
    {
      sum += arr[i];
    }
  }
  ll cnt = odd.size();
  if (cnt == 0)
  {
    cout << 0 << endl;
  }
  else if (cnt == 1)
  {
    cout << sum + odd[0] << endl;
  }
  else
  {
    sort(odd.begin(), odd.end());
    cnt = (cnt + 1) / 2;
    for (ll i = odd.size() - 1; i >= odd.size() - cnt; i--)
    {
      ans += odd[i];
    }
    cout << ans + sum << endl;
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