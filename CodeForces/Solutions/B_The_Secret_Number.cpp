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
  vector<ll> ans;
  ll temp = 11;
  for (ll k = 1; k <= 18; k++)
  {
    if (n % temp == 0)
    {
      ans.push_back(n / temp);
    }
    temp += (ll)pow(10, k - 1) * 90;
  }
  cout << ans.size() << endl;
  sort(ans.begin(), ans.end());
  if (ans.size() != 0)
  {
    for (ll i = 0; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
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