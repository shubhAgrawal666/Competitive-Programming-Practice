#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
int helper(int n)
{
  int ans = 0;
  while (n > 0)
  {
    ans = ans + (n / 2);
    n = n / 2;
  }
  return ans;
}
bool isEven(int n, int r)
{
  int c1 = helper(n - 1);
  int c2 = helper(r);
  int c3 = helper(n - 1 - r);
  return c1 == c2 + c3;
}
void solve()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (isEven(n, i))
    {
      ans = ans ^ arr[i];
    }
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