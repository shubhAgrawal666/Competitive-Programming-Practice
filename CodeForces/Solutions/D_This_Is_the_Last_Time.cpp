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
  vector<pair<int, pair<int, int>>> arr;
  for (int i = 0; i < n; i++)
  {
    int l, r, re;
    cin >> l >> r >> re;
    arr.push_back({l, {r, re}});
  }
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i++)
  {
    if (k >= arr[i].first && k <= arr[i].second.first && k < arr[i].second.second)
    {
      k = arr[i].second.second;
    }
  }
  cout << k << endl;
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