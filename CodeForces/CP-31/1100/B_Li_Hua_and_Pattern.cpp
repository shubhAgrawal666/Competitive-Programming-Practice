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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[n - i - 1][n - j - 1])
            {
                cnt++;
            }
        }
    }
    if (n % 2 == 1)
    {
        for (int j = 0; j < n / 2; j++)
        {
            if (arr[n / 2][j] != arr[n / 2][n - j - 1])
            {
                cnt++;
            }
        }
    }
    if (cnt > k)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (n % 2 == 0)
        {
            if ((k - cnt) % 2 == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
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