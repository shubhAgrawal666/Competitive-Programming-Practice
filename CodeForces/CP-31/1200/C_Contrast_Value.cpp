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
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    if (i == 0)
    {
      arr.push_back(x);
    }
    else
    {
      if (x != *arr.rbegin())
      {
        arr.push_back(x);
      }
    }
  }
  if (arr.size() == 1)
  {
    cout << 1 << endl;
    return;
  }
  int ans = 1;
  bool dec = false;
  if (arr[0] > arr[1])
  {
    dec = true;
  }
  for (int i = 0; i < arr.size() - 1; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      if (!dec)
      {
        ans++;
        dec = true;
      }
    }
    else
    {
      if (dec)
      {
        ans++;
        dec = false;
      }
    }
  }
  cout << ans + 1 << endl;
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