#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
void solve()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  vector<pair<int, int>> p(n);
  for (int i = 0; i < n; i++)
  {
    cin >> p[i].first;
    p[i].second = arr[i];
  }
  sort(p.begin(), p.end());
  int ans = 0;
  int sum = 0;
  for (auto it : p)
  {
    if (it.second > 0)
    {
      sum += it.second;
      ans = max(ans, sum - it.first);
    }
  }
  cout << ans << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}