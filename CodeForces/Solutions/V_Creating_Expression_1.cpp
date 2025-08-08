#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)      \
  for (ll i = 0; i < n; i++) \
    cin >> vec[i];
void fun(vector<ll> arr, ll n, ll x, ll i, ll sum, bool &ans)
{
  if (i == n)
  {
    if (sum == x)
    {
      ans = true;
    }
    return;
  }
  if (ans)
  {
    return;
  }
  fun(arr, n, x, i + 1, sum + arr[i], ans);
  fun(arr, n, x, i + 1, sum - arr[i], ans);
}
void solve()
{
  ll n, x;
  cin >> n >> x;
  vector<ll> arr(n);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  ll i = 1;
  ll sum = arr[0];
  bool ans = false;
  fun(arr, n, x, i, sum, ans);
  if (ans)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}