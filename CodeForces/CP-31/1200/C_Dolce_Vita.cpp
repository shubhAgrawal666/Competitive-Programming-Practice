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
  ll n, x;
  cin >> n >> x;
  vector<ll> arr(n);
  vector<ll> pre(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  for (ll i = 0; i < n; i++)
  {
    if (i == 0)
    {
      pre[i] = arr[i];
    }
    else
    {
      pre[i] = pre[i - 1] + arr[i];
    }
  }
  ll ans = 0;
  for (ll i = 0; i < n; i++)
  {
    if (x >= pre[i])
    {
      ans += 1 + ((x - pre[i]) / (i + 1));
    }
  }
  cout << ans << endl;
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