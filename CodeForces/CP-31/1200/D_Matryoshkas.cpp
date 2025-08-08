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
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
  }
  int ans = 0;
  int prev = -1;
  for (auto it = mp.begin(); it != mp.end(); it++)
  {
    if (it == mp.begin())
    {
      ans = it->second;
      prev = it->first;
    }
    else
    {
      if (prev == it->first - 1)
      {
        if (it->second < mp[prev])
        {
          ans = ans;
        }
        else
        {
          ans += it->second - mp[prev];
        }
        prev = it->first;
      }
      else
      {
        ans += it->second;
        prev = it->first;
      }
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
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}