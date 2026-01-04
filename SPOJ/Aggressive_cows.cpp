#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
int fun(vector<int> &arr, int mid)
{
  int cnt = 0;
  int i = 0;
  while (i < arr.size())
  {
    cnt++;
    i = (lower_bound(arr.begin(), arr.end(), arr[i] + mid) - arr.begin());
  }
  return cnt;
}
void solve()
{
  int n, c;
  cin >> n >> c;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  int start = 0;
  int end = arr[n - 1] - arr[0];
  int mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (fun(arr, mid) >= c)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  cout << end << endl;
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