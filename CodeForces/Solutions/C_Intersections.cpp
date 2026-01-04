#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)      \
  for (ll i = 0; i < n; i++) \
    cin >> vec[i];
ll merge(ll s, ll mid, ll e, vector<ll> &arr)
{
  ll ans = 0;
  ll p1 = s;
  ll p2 = mid + 1;
  vector<ll> res;
  while (p1 <= mid && p2 <= e)
  {
    if (arr[p1] > arr[p2])
    {
      res.push_back(arr[p2]);
      ans += mid - p1 + 1;
      p2++;
    }
    else
    {
      res.push_back(arr[p1]);
      p1++;
    }
  }
  while (p1 <= mid)
  {
    res.push_back(arr[p1]);
    p1++;
  }
  while (p2 <= e)
  {
    res.push_back(arr[p2]);
    p2++;
  }
  for (ll i = s; i <= e; i++)
  {
    arr[i] = res[i - s];
  }
  return ans;
}
ll sortm(ll s, ll e, vector<ll> &arr)
{
  ll ans = 0;
  if (s < e)
  {
    ll mid = s + (e - s) / 2;
    ans += sortm(s, mid, arr);
    ans += sortm(mid + 1, e, arr);
    ans += merge(s, mid, e, arr);
  }
  return ans;
}
void solve()
{
  ll n;
  cin >> n;
  vector<pair<ll, ll>> b(n);
  vector<ll> a(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (ll i = 0; i < n; i++)
  {
    cin >> b[i].first;
    b[i].second = i;
  }
  sort(b.begin(), b.end());
  ll ans = 0;
  vector<ll> tempo(n);
  for (ll i = 0; i < n; i++)
  {
    pair<ll, ll> temp = {a[i], LONG_LONG_MIN};
    ll idx = (lower_bound(b.begin(), b.end(), temp))->second;
    tempo[i] = idx;
  }
  ans = sortm(0, n - 1, tempo);
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