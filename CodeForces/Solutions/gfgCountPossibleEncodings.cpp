#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
int helper(int idx, string num)
{
  int n = num.size();
  if (idx == n)
  {
    return 1;
  }
  if (idx == n - 1)
  {
    if (num[idx] == '*')
    {
      return 9;
    }
    else
    {
      return 1;
    }
  }
  if (num[idx] == '*')
  {
    if (num[idx + 1] == '*')
    {
      int ans = 0;
      ans += helper(idx + 1, num) * 9;
      ans += helper(idx + 2, num) * 16;
      return ans;
    }
    else
    {
      int ans = 0;
      ans += helper(idx + 1, num) * 9;
      if (num[idx + 1] - '0' <= 6)
      {
        ans += helper(idx + 2, num) * 2;
      }
      else
      {
        ans += helper(idx + 2, num);
      }
      return ans;
    }
  }
  else
  {
    if (num[idx + 1] == '*')
    {
      int ans = 0;
      if (num[idx] != '0')
      {
        ans += helper(idx + 1, num);
      }
      if (num[idx] - '0' < 2)
      {
        ans += helper(idx + 2, num) * 9;
      }
      else if (num[idx] - '0' == 2)
      {
        ans += helper(idx + 2, num) * 6;
      }
      else
      {
        ans += helper(idx + 2, num);
      }
      return ans;
    }
    else
    {
      int ans = 0;
      if (num[idx] != '0')
      {
        ans += helper(idx + 1, num);
      }
      if ((num[idx] - '0') * 10 + (num[idx + 1] - '0') <= 26)
      {
        ans += helper(idx + 2, num);
      }
      return ans;
    }
  }
}
void solve()
{
  string s;
  cin >> s;
  int ans = helper(0, s);
  cout << ans << endl;
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