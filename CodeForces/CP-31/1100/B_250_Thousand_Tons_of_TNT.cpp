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
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<ll> pre(n);
    pre[0] = arr[0];
    for (ll i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i];
    }
    ll ans = LONG_LONG_MIN;
    for (ll i = 1; i <= n; i++)
    {
        ll ans2 = LONG_LONG_MIN;
        ll ans1 = LONG_LONG_MAX;
        if (n % i == 0)
        {
            for (ll j = 1; j <= n / i; j++)
            {
                if (((j - 1) * i) >= 1)
                {
                    ans2 = max(ans2, pre[(i * j) - 1] - pre[((j - 1) * i) - 1]);
                    ans1 = min(ans1, pre[(i * j) - 1] - pre[((j - 1) * i) - 1]);
                }
                else
                {
                    ans2 = max(ans2, pre[(i * j) - 1]);
                    ans1 = min(ans1, pre[(i * j) - 1]);
                }
            }
            ans = max(ans, ans2 - ans1);
        }
    }
    cout << ans << endl;
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