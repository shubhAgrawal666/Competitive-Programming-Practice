#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
int N = 1e7;
vector<int> spf(N);
void solve()
{
  int x;
  int y;
  cin >> x >> y;
  string s1 = to_string(x);
  string s2 = to_string(y);
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  set<int> dx, dy;
  do
  {
    if (s1[0] == '0')
    {
      continue;
    }
    int num = stoi(s1);
    while (num > 1)
    {
      dx.insert(spf[num]);
      num /= spf[num];
    }
  } while (next_permutation(s1.begin(), s1.end()));
  do
  {
    if (s2[0] == '0')
    {
      continue;
    }
    int num = stoi(s2);
    while (num > 1)
    {
      dy.insert(spf[num]);
      num /= spf[num];
    }
  } while (next_permutation(s2.begin(), s2.end()));
  int ans = 1;
  for (auto it : dx)
  {
    if (dy.find(it) != dy.end())
    {
      ans = max(ans, it);
    }
  }
  cout << ans << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  for (int i = 1; i < N; i++)
  {
    spf[i] = i;
  }
  for (int i = 2; i * i < N; i++)
  {
    if (spf[i] == i)
    {
      for (int j = i * i; j < N; j += i)
      {
        if (spf[j] == j)
        {
          spf[j] = i;
        }
      }
    }
  }
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}