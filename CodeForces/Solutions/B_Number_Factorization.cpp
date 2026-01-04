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
  ll temp = n;
  vector<pair<ll, ll>> f;
  for (ll i = 2; i * i <= n; i++)
  {
    ll cnt = 0;
    while (temp % i == 0)
    {
      cnt++;
      temp /= i;
    }
    if (cnt > 0)
    {
      f.push_back({cnt, i});
    }
  }
  if (temp > 1)
  {
    f.push_back({1, temp});
  }
  sort(f.begin(), f.end());
  ll ans = 1;
  ll mini = LONG_LONG_MAX;
  temp = 1;
  // for (auto it : f)
  // {
  //   cout << it.first << " " << it.second << endl;
  // }
  for (auto it = f.begin(); it != f.end();)
  {
    while ((*it).first == 0 && it != f.end())
    {
      it++;
    }
    if (it != f.end())
    {
      mini = min(mini, (*it).first);
      for (auto jt = it; jt != f.end(); jt++)
      {
        temp *= (*jt).second;
        (*jt).first -= mini;
      }
      ans += temp * mini;
      temp = 1;
    }
  }
  cout << ans - 1 << endl;
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