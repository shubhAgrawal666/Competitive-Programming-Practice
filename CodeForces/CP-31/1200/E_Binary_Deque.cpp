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
  int n, s;
  cin >> n >> s;
  vector<int> arr(n);
  vector<int> ind;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] == 1)
    {
      ind.push_back(i);
    }
  }
  int cnt = ind.size();
  if (cnt < s)
  {
    cout << -1 << endl;
  }
  else
  {
    int start = 0;
    int end = s - 1;
    int ans = INT_MAX;
    while (end < cnt)
    {
      int startdel = 0;
      int enddel = 0;
      if (start - 1 >= 0)
      {
        startdel = ind[start - 1] + 1;
      }
      if (end + 1 < cnt)
      {
        enddel = n - ind[end + 1];
      }
      ans = min(startdel + enddel, ans);
      start++;
      end++;
    }
    cout << ans << endl;
  }
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