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
  vector<int> arr(n);
  vector<int> brr(n);
  map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i] % k]++;
  }
  for (int i = 0; i < n; i++)
  {
    cin >> brr[i];
    mp[brr[i] % k]--;
  }
  vector<pair<int, int>> have;
  vector<pair<int, int>> nhave;
  for (auto it : mp)
  {
    if (it.second > 0)
    {
      have.push_back({it.first, it.second});
    }
    else if (it.second < 0)
    {
      nhave.push_back({it.first, (-it.second)});
    }
  }
  for (int i = 0; i < have.size(); i++)
  {
    int val = have[i].first;
    int cnt = have[i].second;
    pair<int, int> temp = {k - val, INT_MIN};
    auto it = lower_bound(nhave.begin(), nhave.end(), temp);
    if (it != nhave.end())
    {
      if ((*it).second != cnt)
      {
        cout << "NO" << endl;
        return;
      }
    }
    else
    {
      cout << "NO" << endl;
      return;
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