#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)        \
    for (ll i = 0; i < n; i++) \
        cin >> vec[i];
void solve()
{
    ll n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<pair<ll, ll>> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    a--;
    b--;
    ll xa = arr[a].first;
    ll ya = arr[a].second;
    ll xb = arr[b].first;
    ll yb = arr[b].second;
    ll ans1 = LONG_LONG_MAX;
    ll ans2 = LONG_LONG_MAX;
    for (ll i = 0; i < k; i++)
    {
        ll xi = arr[i].first;
        ll yi = arr[i].second;
        ans1 = min(ans1, abs(xi - xa) + abs(yi - ya));
        ans2 = min(ans2, abs(xi - xb) + abs(yi - yb));
    }
    if (k != 0)
    {
        cout << min(abs(xa - xb) + abs(ya - yb), ans1 + ans2) << endl;
    }
    else
    {
        cout << abs(xa - xb) + abs(ya - yb) << endl;
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