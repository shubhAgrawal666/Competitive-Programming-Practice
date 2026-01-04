#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
int N = 1e5;
vector<int> spf(N + 1);
void solve()
{
  int n;
  cin >> n;
  if (n < 3)
  {
    cout << 1 << endl;
    for (int i = 1; i <= n; i++)
    {
      cout << 1 << ' ';
    }
  }
  else
  {
    cout << 2 << endl;
    for (int i = 0; i < n; i++)
    {
      if (spf[i + 2] == i + 2)
      {
        cout << 1 << " ";
      }
      else
      {
        cout << 2 << " ";
      }
    }
  }
}
int main()
{
  for (int i = 0; i <= N; i++)
  {
    spf[i] = i;
  }
  for (int i = 2; i * i <= N + 1; i++)
  {
    if (spf[i] == i)
    {
      for (int j = i * i; j < N + 1; j += i)
      {
        if (spf[j] == j)
        {
          spf[j] = i;
        }
      }
    }
  }
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