#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
bool fun(int &n, int &x, int &y, int &mid)
{
  int mini = min(x, y);
  int fir = mid / mini;
  int sec = (mid - mini) / max(x, y);
  return n <= fir + sec;
}
void solve()
{
  int n, x, y;
  cin >> n >> x >> y;
  int start = 0;
  int end = min(x, y) * (n);
  int mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (fun(n, x, y, mid))
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  cout << mid << endl;
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