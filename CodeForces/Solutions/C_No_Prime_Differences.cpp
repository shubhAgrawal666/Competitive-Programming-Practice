#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];

bool isPrime(int n)
{
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
void solve()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(n, vector<int>(m));
  if (!isPrime(m))
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        arr[i][j] = (i * m) + (j + 1);
      }
    }
  }
  else if (!isPrime(n))
  {
    for (int j = 0; j < m; j++)
    {
      for (int i = 0; i < n; i++)
      {
        arr[i][j] = (i + 1) + (j * n);
      }
    }
  }
  else
  {
    // cout << 1 << endl;
    for (int i = 0; i <= ((n - 1) / 2); i++)
    {
      for (int j = 0; j < m; j++)
      {
        arr[i][j] = (2 * i * m) + (j + 1);
      }
    }
    int temp = (n - 1) / 2;
    for (int i = ((n + 1) / 2); i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        arr[i][j] = ((i - temp) * m) + (j + 1);
      }
      temp--;
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
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