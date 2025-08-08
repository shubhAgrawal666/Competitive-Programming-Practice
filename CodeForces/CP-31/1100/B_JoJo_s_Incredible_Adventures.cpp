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
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt = 0;
    ll ans = 0;
    bool con0 = false;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            con0 = true;
        }
    }
    if (con0 == false)
    {
        cout << n * n << endl;
        return;
    }
    s += s;
    for (ll i = 0; i < 2 * n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
        ans = max(ans, cnt);
    }
    if (ans % 2 == 0)
    {
        cout << ((ans) / 2) * ((ans) / 2 + 1) << endl;
    }
    else
    {
        cout << ((ans + 1) / 2) * ((ans + 1) / 2) << endl;
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