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
  vector<int> exp(n + 1);
  for (int i = 1; i <= n; i++)
  {
    int temp = i;
    for (int j = 2; j * j <= i; j++)
    {
      int cnt = 0;
      while (temp % j == 0)
      {
        cnt++;
        temp /= j;
      }
      if (cnt != 0)
      {
        exp[j] += cnt;
      }
    }
    if (temp > 1)
    {
      exp[temp] += 1;
    }
  }
  ll ans = 1;
  for (int i = 0; i <= n; i++)
  {
    ans = (ans * (exp[i] + 1)) % 1000000007;
  }
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