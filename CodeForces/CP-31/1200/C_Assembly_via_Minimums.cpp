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
  vector<int> ans;
  map<int, int> mp;
  for (int i = 0; i < n * (n - 1) / 2; i++)
  {
    int k;
    cin >> k;
    mp[k]++;
  }
  int cnt = 0;
  int i = 1;
  for (auto it : mp)
  {
    while (n - i <= it.second)
    {
      ans.push_back(it.first);
      it.second -= (n - i);
      i++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
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