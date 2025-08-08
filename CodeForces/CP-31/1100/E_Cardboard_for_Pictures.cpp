#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)        \
    for (ll i = 0; i < n; i++) \
        cin >> vec[i];
ll size(vector<ll> arr, ll mid)
{
    ll ans = 0;
    for (ll i = 0; i < arr.size(); i++)
    {
        ans += ((arr[i] + (2 * mid)) * (arr[i] + (2 * mid)));
        if (ans > 1e18)
        {
            break;
        }
    }
    return ans;
}
void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll start = 1;
    ll end = 1e9;
    ll mid = start + (end - start) / 2;
    while (start <= end)
    {
        ll val = size(arr, mid);
        if (val == c)
        {
            cout << mid << endl;
            return;
        }
        else if (val < c)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
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