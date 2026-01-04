#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)      \
  for (ll i = 0; i < n; i++) \
    cin >> vec[i];
ll merge(int s, int mid, int e, vector<int> &arr)
{
  ll ans = 0;
  int p1 = s;
  int p2 = mid + 1;
  vector<ll> res;
  while (p1 <= mid && p2 <= e)
  {
    if (arr[p1] > arr[p2])
    {
      // cout << arr[p1] << " " << arr[p2] << endl;
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
ll sort(int s, int e, vector<int> &arr)
{
  ll ans = 0;
  if (s < e)
  {
    int mid = s + (e - s) / 2;
    ans += sort(s, mid, arr);
    ans += sort(mid + 1, e, arr);
    ans += merge(s, mid, e, arr);
  }
  return ans;
}
void solve()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll ans = sort(0, n - 1, arr);
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