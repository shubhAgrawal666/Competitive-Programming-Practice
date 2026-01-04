#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)      \
  for (ll i = 0; i < n; i++) \
    cin >> vec[i];
ll expo(ll a, ll b)
{
  ll res = 1;
  while (b > 0)
  {
    if (b & 1)
      res = (res * a);
    a = (a * a);
    b = b >> 1;
  }
  return res;
}
void solve()
{
  ll p, q;
  cin >> p >> q;
  vector<int> prime;
  ll nq = q;
  for (ll i = 2; i * i <= nq; i++)
  {
    if (nq % i == 0)
    {
      prime.push_back(i);
      while (nq % i == 0)
      {
        nq /= i;
      }
    }
  }
  if (nq > 1)
  {
    prime.push_back(nq);
  }
  ll ans = p;
  for (auto pr : prime)
  {
    ll a = 0;
    ll b = 0;
    ll np = p;
    ll nq = q;
    while (np % pr == 0)
    {
      a++;
      np /= pr;
    }
    while (nq % pr == 0)
    {
      b++;
      nq /= pr;
    }
    ll drop = a - b + 1;
    ll val = 1;
    for (int i = 0; i < drop; i++)
    {
      val *= pr;
    }
    ans = min(ans, val);
  }
  cout << p / ans << endl;
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