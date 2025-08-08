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
  string s;
  cin >> s;
  int c = 0;
  int a = 0;
  int t = 0;
  for (int i = 0; i < 3; i++)
  {
    if (s[i] == 'a')
    {
      a++;
    }
    if (s[i] == 'c')
    {
      c++;
    }
    if (s[i] == 't')
    {
      t++;
    }
  }
  if (c == 1 && a == 1 && t == 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
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