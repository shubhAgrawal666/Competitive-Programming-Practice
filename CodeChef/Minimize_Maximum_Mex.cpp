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
  vector<int> brr(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> brr[i];
  }
  set<int> both, one;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == brr[i])
      both.insert(arr[i]);
    else
    {
      one.insert(arr[i]);
      one.insert(brr[i]);
    }
  }
  int mex = 0;
  bool first = true;
  while (true)
  {
    if (both.count(mex))
    {
      mex++;
    }
    else if (first && one.count(mex))
    {
      mex++;
      first = false;
    }
    else
      break;
  }
  cout << mex << endl;
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