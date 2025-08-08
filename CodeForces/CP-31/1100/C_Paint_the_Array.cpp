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
    ll gcdo = arr[1];
    ll gcde = arr[0];
    for (ll i = 0; i < n; i += 2)
    {
        gcde = __gcd(gcde, arr[i]);
    }
    for (ll i = 1; i < n; i += 2)
    {
        gcdo = __gcd(gcdo, arr[i]);
    }
    bool isGcdo = true;
    for (ll i = 0; i < n; i += 2)
    {
        if (gcdo != 0 && arr[i] % gcdo == 0)
        {
            isGcdo = false;
            break;
        }
    }
    if (isGcdo)
    {
        cout << gcdo << endl;
    }
    else
    {
        for (ll i = 1; i < n; i += 2)
        {
            if (gcde != 0 && arr[i] % gcde == 0)
            {
                cout << 0 << endl;
                return;
            }
        }
        cout << gcde << endl;
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