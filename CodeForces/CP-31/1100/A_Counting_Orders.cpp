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
    vector<ll> brr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> brr[i];
    }
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());
    ll ptr1 = n - 1;
    ll ptr2 = n - 1;
    ll cnt = 0;
    ll min_val = 0;
    ll ans = 1;
    while (ptr2 >= 0)
    {
        while (arr[ptr1] > brr[ptr2] && ptr1 >= 0)
        {
            ptr1--;
            cnt++;
            if (ptr1 >= 0)
            {
                min_val = arr[ptr1];
            }
        }
        ans = ((ans) % (long long)(1e9 + 7) * ((cnt) % (long long)(1e9 + 7) - ((n - 1) - ptr2) % (long long)(1e9 + 7))) % (long long)(1e9 + 7);
        ptr2--;
    }
    cout << ans % (long long)(1e9 + 7) << endl;
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