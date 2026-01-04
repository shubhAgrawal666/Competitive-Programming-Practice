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
  vector<ll> arr(n);
  ll ans = n;
  map<int, int> mp;
  mp[1] = n;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    ll temp = arr[i];
    for (ll j = 2; j * j <= arr[i]; j++)
    {
      ll cnt = 0;
      while (arr[i] % j == 0)
      {
        cnt++;
        arr[i] /= j;
      }
      mp[j] += cnt;
    }
    if (arr[i] > 1)
    {
      mp[arr[i]] += 1;
    }
  }
  for (auto it : mp)
  {
    if ((it.second % n) != 0)
    {
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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