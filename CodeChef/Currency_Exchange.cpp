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
  int a1, b1, a2, b2;
  cin >> a1 >> b1 >> a2 >> b2;
  int total1 = 5 * a1 + b1;
  int total2 = 5 * a2 + b2;
  if (total1 == total2)
  {
    cout << "Yes" << endl;
  }
  else if (total1 < total2)
  {
    cout << "No" << endl;
  }
  else
  {
    int diff = total1 - total2;
    if (diff % 6 == 0)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
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