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
    vector<int> arr(n);
    vector<int> idx(1001, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        idx[arr[i]] = i;
    }
    int ans = -1;
    for (int i = 1; i <= 1000; i++)
    {
        if (idx[i] != -1)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (idx[j] != -1 && gcd(i, j) == 1)
                {
                    ans = max(ans, idx[i] + idx[j] + 2);
                }
            }
        }
    }
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