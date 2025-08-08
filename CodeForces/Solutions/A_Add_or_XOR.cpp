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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (a > b)
    {
        if (a > b + 1)
        {
            cout << -1 << endl;
            return;
        }
        else if (a % 2 == 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            cout << y << endl;
        }
    }
    else if (a == b)
    {
        cout << 0 << endl;
    }
    else
    {
        if (x <= y)
        {
            cout << (ll)(b - a) * x << endl;
        }
        else
        {
            int o = 0;
            int e = 0;
            for (int i = a; i < b; i++)
            {
                if (i % 2 == 0)
                {
                    e++;
                }
                else
                {
                    o++;
                }
            }
            cout << (ll)((e * y) + (o * x)) << endl;
        }
    }
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