#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)         \
    for (int i = 0; i < n; i++) \
        cin >> vec[i];
void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x == 0)
    {
        cout << "No\n";
        return;
    }
    if (x > 0 && y == 0)
    {
        cout << "Yes\n";
        return;
    }
    if (x != 0 && y != 0)
    {
        if (y % x == 0)
        {
            ll sum = y / x;
            if (sum >= 1)
            {
                cout << "Yes\n";
                return;
            }
        }
    }
    cout << "No\n";
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