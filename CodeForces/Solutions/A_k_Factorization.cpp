#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
vector<pair<int, int>> factors(int x)
{
  vector<pair<int, int>> factor;
  for (int i = 2; x > 1 && i <= x; i++)
  {
    int cnt = 0;
    while (x % i == 0)
    {
      cnt++;
      x /= i;
    }
    if (cnt != 0)
    {
      factor.push_back({i, cnt});
    }
  }
  return factor;
}

void solve()
{
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> f = factors(n);
  int sum = 0;
  for (auto it : f)
  {
    sum += it.second;
  }
  if (sum < k)
  {
    cout << -1 << endl;
  }
  else
  {
    int i = 0;
    while (k > 1)
    {
      if (f[i].second > 0)
      {
        cout << f[i].first << " ";
        f[i].second--;
        k--;
      }
      else
      {
        i++;
      }
    }
    int ans = 1;
    for (auto it : f)
    {
      ans = ans * (int)pow(it.first, it.second);
    }
    cout << ans << endl;
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}