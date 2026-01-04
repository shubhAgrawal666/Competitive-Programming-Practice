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
  map<int, int> mp;
  int cnt = 0;
  int cntk = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mp[arr[i]]++;
    if (arr[i] >= k)
    {
      cnt++;
    }
    if (arr[i] == k)
    {
      cntk++;
    }
  }
  int cnt1 = 0;
  for (int i = 0; i < k; i++)
  {
    if (mp[i] == 0)
    {
      cnt1++;
    }
    else if (mp[i] > 1)
    {
      cnt += mp[i] - 1;
    }
  }
  if (cnt1 <= cntk)
  {
    cout << cntk << endl;
  }
  else if (cnt1 > cntk)
  {
    if (cnt1 <= cnt)
    {
      cout << cnt1 << endl;
    }
    else
    {
      cout << -1 << endl;
    }
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