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
  ll sum = 0;
  for (ll i = 0; i < n; i++)
  {
    cin >> arr[i];
    sum += arr[i];
  }
  vector<int> tempo;
  ll temp = -1;
  while (k--)
  {
    ll t;
    cin >> t;
    if (t == 2)
    {
      ll x;
      cin >> x;
      sum = n * x;
      temp = x;
      tempo.clear();
      cout << sum << endl;
    }
    else
    {
      ll i, x;
      cin >> i >> x;
      i--;
      if (temp != -1 && find(tempo.begin(), tempo.end(), i) == tempo.end())
      {
        sum -= temp;
        tempo.push_back(i);
      }
      else
      {
        sum -= arr[i];
      }
      arr[i] = x;
      sum += x;
      cout << sum << endl;
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