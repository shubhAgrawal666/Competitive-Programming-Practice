#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)         \
    for (int i = 0; i < n; i++) \
        cin >> vec[i];
#define mod % ((ll)(1e9 + 7))
void solve()
{
    ll n;
    cin >> n;
    ll ans = (337 * (n)) mod;
    ans = ((ans) * (n + 1) mod);
    ans = ((ans) * (((((4 * n) mod) - ((1)mod)) + (ll)(1e9 + 7)) mod) mod);
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}