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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll cnt = 0;
    ll ans = 0;
    ll mini = LONG_LONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 0)
        {
            cnt++;
        }
        ans += abs(arr[i]);
        mini = min(mini, abs(arr[i]));
    }
    if (cnt % 2 == 0)
    {
        cout << ans << endl;
    }
    else
    {
        cout << ans - (2 * mini) << endl;
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