#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)      \
  for (ll i = 0; i < n; i++) \
    cin >> vec[i];
int N = 1e7;
vector<bool> prime(N, 0);
vector<int> ans(N, 0);
void solve()
{
  ll n;
  cin >> n;
  cout << ans[n] << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  prime[0] = prime[1] = false;
  for (ll i = 2; i <= N; i++)
  {
    if (!prime[i])
    {
      for (ll j = 2 * i; j < N; j += i)
      {
        prime[j] = 1;
      }
    }
  }
  for (int x = 1; x <= 5000; x++)
  {
    for (int y = 1; y <= 90; y++)
    {
      int res = x * x + y * y * y * y;
      if (res >= N)
        break;
      if (!prime[res])
      {
        ans[res] = 1;
      }
    }
  }
  for (int i = 1; i < N; i++)
  {
    ans[i] = ans[i] + ans[i - 1];
  }
  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}