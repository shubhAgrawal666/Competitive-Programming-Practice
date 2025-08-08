#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
bool isSorted(vector<int> arr)
{
  for (int i = 0; i < arr.size() - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false;
    }
  }
  return true;
}
void solve()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  if (isSorted(arr))
  {
    cout << 0 << endl;
    return;
  }
  else if (arr[n - 2] > arr[n - 1] || arr[n - 1] < 0)
  {
    cout << -1 << endl;
    return;
  }
  cout << n - 2 << endl;
  for (int i = 0; i < n - 2; i++)
  {
    cout << i + 1 << " " << n - 1 << " " << n << endl;
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