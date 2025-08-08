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
  string s;
  cin >> s;
  int s1 = -1;
  int e1 = -1;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '1')
    {
      s1 = i;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--)
  {
    if (s[i] == '1')
    {
      e1 = i;
      break;
    }
  }
  int s0 = -1;
  int e0 = -1;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      s0 = i;
      break;
    }
  }
  for (int i = n - 1; i >= 0; i--)
  {
    if (s[i] == '0')
    {
      e0 = i;
      break;
    }
  }
  if (s0 == -1 || s1 == -1 || e1 < s0 || e0 < s1)
  {
    cout << n << endl;
  }
  else
  {
    if (s1 < s0 && e1 > e0)
    {
      cout << n - (e0 - s0 + 1) << endl;
    }
    else if (s0 < s1 && e0 > e1)
    {
      cout << n - (e1 - s1 + 1) << endl;
    }
    else
    {
      int ans = 2;
      int l = 0;
      int r = n - 1;
      while (s[l] == s[l + 1])
      {
        l++;
        ans++;
      }
      while (s[r] == s[r - 1])
      {
        r--;
        ans++;
      }
      cout << ans + 1 << endl;
    }
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