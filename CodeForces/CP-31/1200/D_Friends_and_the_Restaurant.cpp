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
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    arr[i] = x - arr[i];
    if (arr[i] >= 0)
    {
      cnt++;
    }
  }
  sort(arr.begin(), arr.end());
  int s = 0;
  int e = n - 1;
  int sum = 0;
  int ans = 0;
  while (s < e)
  {
    while (abs(arr[s]) > arr[e] && s < n - 1)
    {
      s++;
    }
    sum = arr[s] + arr[e];
    if (sum >= 0 && s < e)
    {
      ans++;
      s++;
      e--;
    }
  }
  cout << max(ans, cnt / 2) << endl;
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