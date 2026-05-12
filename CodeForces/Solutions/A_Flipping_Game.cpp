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
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            ans++;
        }
    }
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
        if (cnt >= 0)
        {
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    if (maxi <= 0)
    {
        cout << n - 1 << endl;
        return;
    }
    cout << ans + maxi << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}