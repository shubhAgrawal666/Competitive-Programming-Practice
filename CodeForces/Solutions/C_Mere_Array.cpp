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
  int mini = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    mini = min(mini, arr[i]);
  }
  vector<int> temp = arr;
  sort(temp.begin(), temp.end());
  int gc = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (temp[i] != arr[i])
    {
      gc = __gcd(gc, arr[i]);
    }
  }
  if (gc == mini)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
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