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
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(k);
  for (ll i = 0; i < k; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  vector<ll> diff;
  for (ll i = 0; i < k - 1; i++)
  {
    diff.push_back(arr[i + 1] - arr[i] - 1);
  }
  diff.push_back(n + arr[0] - arr[k - 1] - 1);
  sort(diff.begin(), diff.end(), greater<>());
  ll ans = 0;
  for (ll i = 0; i < k; i++)
  {
    diff[i] = diff[i] - (4 * i);
    if (diff[i] > 0)
    {
      ans += 1;
      diff[i]--;
      if (diff[i] - 1 > 0)
      {
        ans += diff[i] - 1;
      }
    }
  }
  cout << n - ans << endl;
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