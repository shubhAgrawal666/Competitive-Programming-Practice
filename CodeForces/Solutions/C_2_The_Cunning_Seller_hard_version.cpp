#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
int helper(int mid, int n)
{
}
void solve()
{
  ll n, k;
  cin >> n >> k;
  vector<int> ter;
  int cnt = 0;
  while (n > 0)
  {
    ter.push_back(n % 3);
    cnt += n % 3;
    n = n / 3;
  }
  reverse(ter.begin(), ter.end());
  if (cnt > k)
  {
    cout << -1 << endl;
    return;
  }
  int diff = k - cnt;
  diff = diff / 2;
  for (int i = 0; i < ter.size() - 1; i++)
  {
    int curr = 0;
    if (diff > 0)
    {
      curr = min(diff, ter[i]);
      ter[i] -= curr;
      ter[i + 1] += curr * 3;
      diff -= curr;
    }
    if (diff == 0)
    {
      break;
    }
  }
  ll ans = 0;
  for (int i = ter.size() - 1; i >= 0; i--)
  {
    if (ter[i] != 0)
    {
      ll x = ter.size() - i - 1;
      double a = (pow(3, x - 1));
      ll b = (x + 9);
      ll c = (ter[i]);
      ans += c * (a * b);
    }
  }
  cout << ans << endl;
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