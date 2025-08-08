#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)        \
    for (ll i = 0; i < n; i++) \
        cin >> vec[i];
ll wunit(vector<ll> arr, ll h)
{
    ll ans = 0;
    for (ll i = 0; i < arr.size(); i++)
    {
        if (h > arr[i])
        {
            ans += (h - arr[i]);
        }
    }
    return ans;
}
void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll start = arr[0];
    ll end = arr[n - 1] + x;
    ll mid = start + (end - start) / 2;
    ll ans = -1;
    while (start <= end)
    {
        if (wunit(arr, mid) <= x)
        {
            ans = max(ans, mid);
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
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