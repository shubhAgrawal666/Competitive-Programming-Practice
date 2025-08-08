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
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int maxi = n;
  int mini = 1;
  int s = 0;
  int e = n - 1;
  while (s < e)
  {
    if ((arr[e] != maxi && arr[e] != mini) && (arr[s] != maxi && arr[s] != mini) && (s < e))
    {
      cout << s + 1 << " " << e + 1 << endl;
      return;
    }
    if (arr[s] == mini)
    {
      mini++;
      s++;
    }
    if (arr[s] == maxi)
    {
      maxi--;
      s++;
    }
    if (arr[e] == mini)
    {
      mini++;
      e--;
    }
    if (arr[e] == maxi)
    {
      maxi--;
      e--;
    }
  }
  cout << -1 << endl;
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