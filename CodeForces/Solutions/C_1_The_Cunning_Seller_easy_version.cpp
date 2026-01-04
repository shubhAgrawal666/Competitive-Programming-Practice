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
  ll n;
  cin >> n;
  string ter = "";
  while (n > 0)
  {
    ter = ter + to_string((n % 3));
    n = n / 3;
  }
  int start = 0;
  int end = ter.size() - 1;
  while (start < end)
  {
    swap(ter[start], ter[end]);
    start++;
    end--;
  }
  ll ans = 0;
  for (int i = ter.size() - 1; i >= 0; i--)
  {
    if (ter[i] != '0')
    {
      int x = ter.size() - i - 1;
      double a = (pow(3, x - 1));
      ll b = (x + 9);
      ll c = (ter[i] - '0');
      ans += c * a * b;
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