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
  vector<int> arr(n);
  vector<int> brr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> brr[i];
    if (arr[i] >= brr[i])
    {
      ans += arr[i] - brr[i];
    }
  }
  cout << ans + 1 << endl;
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