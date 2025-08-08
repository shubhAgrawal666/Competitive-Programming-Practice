#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
int fun(vector<pair<int, int>> &arr, int n, int left, int x)
{
  if (x == n)
  {
    return 0;
  }
  if (left >= arr[x].first)
  {
    return max(fun(arr, n, left, x + 1), fun(arr, n, left - arr[x].first, x + 1) + arr[x].second);
  }
  else
  {
    return fun(arr, n, left, x + 1);
  }
}
void solve()
{
  int n, w;
  cin >> n >> w;
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first >> arr[i].second;
  }
  int x = 0;
  cout << fun(arr, n, w, x);
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}