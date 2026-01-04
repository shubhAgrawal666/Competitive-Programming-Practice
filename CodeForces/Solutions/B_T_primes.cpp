#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
bool isPrime(ll n)
{
  if (n == 1)
  {
    return false;
  }
  for (ll i = 2; i * i <= n; i++)
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
  ll n;
  cin >> n;
  for (ll i = 0; i < n; i++)
  {
    ll x;
    cin >> x;
    if (((ll)sqrt(x)) * ((ll)sqrt(x)) != x)
    {
      cout << "NO" << endl;
    }
    else
    {
      int k = (ll)sqrt(x);
      if (isPrime(k))
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }
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