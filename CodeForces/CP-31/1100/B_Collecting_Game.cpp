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
    vector<pair<ll, ll>> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    vector<ll> pre(n);
    pre[0] = arr[0].first;
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + arr[i].first;
    }
    vector<ll> ans(n);
    for (int i = 0; i < n; i++)
    {
        int j = i;
        int found = i;
        while (j < n)
        {
            pair<ll, ll> temp = {pre[j] + 1, INT_MIN};
            ll idx = lower_bound(arr.begin(), arr.end(), temp) - arr.begin();
            idx--;
            if (idx == j)
            {
                break;
            }
            found += idx - j;
            j = idx;
        }
        ans[arr[i].second] = found;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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