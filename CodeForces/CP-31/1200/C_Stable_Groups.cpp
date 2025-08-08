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
  ll n, k, x;
  cin >> n >> k >> x;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  map<ll, ll> mp;
  for (ll i = 0; i < n - 1; i++)
  {
    mp[(arr[i + 1] - arr[i] - 1) / x]++;
  }
  ll ans = 0;
  for (auto it : mp)
  {
    if (it.first <= k && k > 0)
    {
      if (it.first * it.second <= k && it.first * it.second > 0)
      {
        k -= it.first * it.second;
        it.second = 0;
      }
      else if (it.first * it.second > k)
      {
        it.second -= k / it.first;
        k = 0;
      }
    }
    if (it.first > 0)
    {
      ans += it.second;
    }
  }
  cout << ans + 1 << endl;
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