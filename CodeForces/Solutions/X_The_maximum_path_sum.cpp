#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
int fun(vector<vector<int>> arr, int n, int m, int sum, int x, int y)
{
  if (x == n || y == m)
  {
    return sum;
  }
  sum += arr[x][y];
  if (x == n - 1)
  {
    return fun(arr, n, m, sum, x, y + 1);
  }
  if (y == m - 1)
  {
    return fun(arr, n, m, sum, x + 1, y);
  }
  return max(fun(arr, n, m, sum, x + 1, y), fun(arr, n, m, sum, x, y + 1));
}
void solve()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(n, vector<int>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }
  int sum = 0;
  int x = 0;
  int y = 0;
  cout << fun(arr, n, m, sum, x, y);
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