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
  int negcnt = 0;
  int cnt0 = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (arr[i] == 0)
    {
      cnt0++;
    }
    else if (arr[i] < 0)
    {
      negcnt++;
    }
  }
  if (negcnt % 2 == 0)
  {
    cout << cnt0 << endl;
  }
  else
  {
    cout << cnt0 + 2 << endl;
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