#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
void fun(string s, vector<string> &ans, int &size, vector<int> &cnt, int x)
{
  if (x == size)
  {
    ans.push_back(s);
    return;
  }
  for (int i = 0; i < 26; i++)
  {
    if (cnt[i] > 0)
    {
      cnt[i]--;
      fun(s + (char)(i + 'a'), ans, size, cnt, x + 1);
      cnt[i]++;
    }
  }
}
void solve()
{
  string s;
  cin >> s;
  vector<int> cnt(26);
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    cnt[s[i] - 'a']++;
  }
  vector<string> ans;
  int x = 0;
  fun("", ans, n, cnt, x);
  cout << ans.size() << endl;
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << endl;
  }
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