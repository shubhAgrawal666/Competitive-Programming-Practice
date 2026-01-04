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
  ll a, b, q;
  cin >> a >> b >> q;
  vector<ll> s(a);
  for (ll i = 0; i < a; i++)
  {
    cin >> s[i];
  }
  vector<ll> t(b);
  for (ll i = 0; i < b; i++)
  {
    cin >> t[i];
  }
  while (q--)
  {
    ll x;
    cin >> x;
    ll ls = (s[0] < x) ? (*(lower_bound(s.begin(), s.end(), x) - 1)) : (s[0]);
    ll rs = (s[a - 1] > x) ? (*upper_bound(s.begin(), s.end(), x)) : (s[a - 1]);
    ll lt = (t[0] < x) ? (*(lower_bound(t.begin(), t.end(), x) - 1)) : (t[0]);
    ll rt = (t[b - 1] > x) ? (*upper_bound(t.begin(), t.end(), x)) : (t[b - 1]);
    ll ans = abs(ls - x) + abs(rt - ls);
    ans = min(ans, abs(lt - x) + abs(rs - lt));
    ans = min(ans, abs(rs - x) + abs(lt - rs));
    ans = min(ans, abs(rt - x) + abs(ls - rt));
    if ((lt < ls || ls < lt) && (x > max(lt, ls)))
    {
      ans = min(ans, abs(min(ls, lt) - x));
    }
    if ((rt < rs || rs < rt) && (x < min(rt, rs)))
    {
      ans = min(ans, abs(max(rs, rt) - x));
    }
    cout << ans << endl;
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