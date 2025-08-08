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
  char c;
  string s;
  cin >> n >> c >> s;
  bool isdone = true;
  vector<int> ind;
  for (int i = 0; i < n; i++)
  {
    if (s[i] != c)
    {
      ind.push_back(i + 1);
      isdone = false;
    }
  }
  if (isdone)
  {
    cout << 0 << endl;
    return;
  }
  for (int i = 2; i <= n; i++)
  {
    bool b = true;
    for (int j = i - 1; j < n; j += i)
    {
      if (s[j] != c)
      {
        b = false;
        break;
      }
    }
    if (b)
    {
      cout << 1 << endl;
      cout << i << endl;
      return;
    }
  }
  cout << 2 << endl;
  cout << n - 1 << " " << n << endl;
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