#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)      \
  for (ll i = 0; i < n; i++) \
    cin >> vec[i];
void solve()
{
  ll n;
  cin >> n;
  ll p = -1;
  ll q = -1;
  for (ll i = 2; i * i <= n; i++)
  {
    if (n % ((i) * (i)) == 0)
    {
      p = i;
      q = n / (p * p);
      break;
    }
    else if (n % i == 0)
    {
      q = i;
      p = (ll)sqrtl(n / q);
      break;
    }
  }
  cout << p << " " << q << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}