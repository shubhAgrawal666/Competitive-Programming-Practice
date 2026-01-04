#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
bool isPrime(int n)
{
  if (n == 1)
  {
    return false;
  }
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
void solve()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  vector<int> gcf(n);
  vector<int> gcb(n);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    if (i == 0)
    {
      gcf[0] = arr[0];
    }
    else
    {
      gcf[i] = __gcd(gcf[i - 1], arr[i]);
    }
  }
  for (int i = n - 1; i >= 0; i--)
  {
    if (i == n - 1)
    {
      gcb[n - 1] = arr[n - 1];
    }
    else
    {
      gcb[i] = __gcd(gcb[i + 1], arr[i]);
    }
  }
  int ans = 0;
  if (gcb[1] != 1)
  {
    ans += 1;
  }
  for (int i = 1; i < n - 1; i++)
  {
    if (__gcd(gcf[i - 1], gcb[i + 1]) != 1)
    {
      ans += 1;
    }
  }
  if (gcf[n - 2] != 1)
  {
    ans += 1;
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