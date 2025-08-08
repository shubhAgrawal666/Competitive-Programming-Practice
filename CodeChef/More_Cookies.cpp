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
  int n, c;
  cin >> n >> c;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int mini = *min_element(arr.begin(), arr.end());
  int maxi = *max_element(arr.begin(), arr.end());

  for (int i = mini + 1; i < maxi; i++)
  {
    if (find(arr.begin(), arr.end(), i) == arr.end() && i >= c)
    {
      cout << i - c << endl;
      return;
    }
  }
  cout << max(maxi + 1 - c, 0) << endl;
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