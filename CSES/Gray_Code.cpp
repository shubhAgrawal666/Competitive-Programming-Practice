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
    int n;
    cin >> n;
    vector<vector<int>> ans((1 << n), vector<int>(n, 0));
    for (int i = n - 1; i >= 0; i--)
    {
        int cnt = 0;
        int totcnt = (1 << ((n - 1) - i));
        int j = totcnt;
        while (j < (1 << n))
        {
            if (cnt < (totcnt * 2))
            {
                ans[j][i] = 1;
                cnt++;
                j++;
            }
            else
            {
                j = j + (totcnt * 2);
                cnt = 0;
            }
        }
    }
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}