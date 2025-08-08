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
  int n, k;
  cin >> n >> k;
  k--;
  vector<pair<int, int>> arr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].first;
    if (i != k)
    {
      arr[i].second = 0;
    }
    else
    {
      arr[i].second = INT_MAX;
    }
  }
  sort(arr.begin(), arr.end());
  int l = 0;
  while (arr[l].second != INT_MAX)
  {
    l++;
  }
  int pass = 0;
  for (int i = l; i < n - 1; i++)
  {
    int dist = arr[i].first + 1 - pass;
    int diff = arr[i + 1].first - arr[i].first;
    if (dist <= diff)
    {
      cout << "NO" << endl;
      return;
    }
    else
    {
      pass += diff;
    }
  }
  cout << "YES" << endl;
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