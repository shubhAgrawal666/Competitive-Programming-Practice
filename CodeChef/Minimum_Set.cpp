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
  int ans = 1 ^ 2;
  for (int i = 2; i < n; i++)
  {
    ans += ((i) ^ ((i + 1)));
  }
  if (n % 2 == 0)
  {
    if (n % 8 == 0)
    {
      cout << ans << endl;
      cout << (ans + n) / 2 << endl;
    }
    else
    {
      cout << (ans + n + 1) / 2 << endl;
    }
    // if (ans % 2 == 0)
    // {
    //   cout << (ans + n) / 2 << endl;
    // }
    // else
    // {
    //   cout << (ans + 1) / 2 + (n / 2) << endl;
    // }
  }
  else
  {
    cout << (ans + n) / 2 << endl;
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