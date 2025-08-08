#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
void fun(vector<vector<int>> &a, vector<vector<int>> &b, int r, int c, int x, int y)
{
  if (x == r)
  {
    return;
  }
  if (y == c - 1)
  {
    cout << a[x][y] + b[x][y] << endl;
    y = 0;
    fun(a, b, r, c, x + 1, y);
    return;
  }
  cout << a[x][y] + b[x][y] << " ";
  fun(a, b, r, c, x, y + 1);
}
void solve()
{
  int r, c;
  cin >> r >> c;
  vector<vector<int>> a(r, vector<int>(c, 0));
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> a[i][j];
    }
  }
  vector<vector<int>> b(r, vector<int>(c, 0));
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> b[i][j];
    }
  }
  int x = 0;
  int y = 0;
  fun(a, b, r, c, x, y);
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