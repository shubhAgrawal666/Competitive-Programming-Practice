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
  ll n, m;
  cin >> n >> m;
  vector<ll> arr(n);
  vector<bool> isgood(m + 1, true);
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 2; j * j <= arr[i]; j++)
    {
      int cnt = 0;
      while (arr[i] % j == 0)
      {
        cnt++;
        arr[i] /= j;
      }
      if (cnt > 0)
      {
        if (isgood[j] == true)
        {
          for (int k = j; k <= m; k += j)
          {
            isgood[k] = false;
          }
        }
      }
    }
    if (arr[i] > 1 && isgood[arr[i]] == true)
    {
      for (int k = arr[i]; k <= m; k += arr[i])
      {
        isgood[k] = false;
      }
    }
  }
  ll cnt = 0;
  for (auto it : isgood)
  {
    if (it == true)
    {
      cnt++;
    }
  }
  cout << cnt - 1 << endl;
  for (auto it = isgood.begin() + 1; it != isgood.end(); it++)
  {
    if (*it == true)
    {
      cout << it - isgood.begin() << endl;
    }
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