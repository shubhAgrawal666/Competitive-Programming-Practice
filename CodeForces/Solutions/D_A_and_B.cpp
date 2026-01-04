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
  string s;
  cin >> s;
  vector<int> idxa;
  vector<int> idxb;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'a')
    {
      idxa.push_back(i);
    }
    else
    {
      idxb.push_back(i);
    }
  }
  int n1 = idxa.size();
  for (int i = idxa[n1 / 2] - (n1 / 2) - 1; i <= idxa[n1 / 2] + (n1 / 2) + 1)
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