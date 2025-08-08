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
  ll n, k;
  cin >> n >> k;
  vector<ll> arr(n);
  ll ans = 0;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    ans += arr[i];
  }
  sort(arr.begin(), arr.end());
  if (arr[1] <= arr[0] + 1)
  {
    cout << ans + k * arr[1] << endl;
  }
  else
  {
    ll temp = 0;
    if ((arr[0] + arr[1]) % 2 == 0)
    {
      temp = (arr[0] + arr[1]) / 2;
    }
    else
    {
      temp = (arr[0] + arr[1] + 1) / 2;
    }
    int i = 1;
    for (; ((i <= k) && (temp > arr[0] + 1)); i++)
    {
      ans += temp;
      if ((temp + arr[0]) % 2 == 0)
      {
        temp = (arr[0] + temp) / 2;
      }
      else
      {
        temp = (arr[0] + temp + 1) / 2;
      }
    }
    cout << ans + (k - i + 1) * temp << endl;
  }
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