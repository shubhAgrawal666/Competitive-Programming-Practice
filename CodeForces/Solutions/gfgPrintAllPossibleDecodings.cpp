#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
void helper(int idx, string s, vector<string> &ans, string num)
{
  int n = (int)num.size();
  if (idx == n)
  {
    ans.push_back(s);
    return;
  }
  if (idx == n - 1)
  {
    int temp = num[idx] - '0';
    s.push_back('a' + temp - 1);
    helper(idx + 1, s, ans, num);
    return;
  }
  if (num[idx + 1] == '0')
  {
    int temp = (num[idx] - '0') * 10;
    s.push_back(temp + 'a' - 1);
    helper(idx + 2, s, ans, num);
    return;
  }
  int temp = (num[idx] - '0') * 10 + (num[idx + 1] - '0');
  if (temp > 26)
  {
    int g = (num[idx] - '0');
    s.push_back(g + 'a' - 1);
    helper(idx + 1, s, ans, num);
    return;
  }
  else
  {
    int g = (num[idx] - '0');
    s.push_back(g + 'a' - 1);
    helper(idx + 1, s, ans, num);
    s.pop_back();
    s.push_back(temp + 'a' - 1);
    helper(idx + 2, s, ans, num);
  }
}
void solve()
{
  string s;
  cin >> s;
  vector<string> ans;
  helper(0, "", ans, s);
  for (auto it : ans)
  {
    cout << it << " ";
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