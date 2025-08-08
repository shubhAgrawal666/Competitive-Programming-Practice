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
  string s;
  cin >> n >> s;
  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
      string temp = "";
      for (int j = 1; j < i; j++)
      {
        temp = temp + ch;
      }
      for (char k = 'a'; k <= 'z'; k++)
      {
        string temp1 = temp + k;
        if (s.find(temp1) == string::npos)
        {
          cout << temp1 << endl;
          return;
        }
      }
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