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
    vector<pair<int, int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> brr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i].first;
        brr[i].second = i;
    }
    sort(brr.begin(), brr.end());
    vector<pair<int, int>> crr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> crr[i].first;
        crr[i].second = i;
    }
    sort(crr.begin(), crr.end());
    int ans = 0;
    for (int i = n - 1; i >= n - 3; i--)
    {
        for (int j = n - 1; j >= n - 3; j--)
        {
            for (int k = n - 1; k >= n - 3; k--)
            {
                if (arr[i].second != brr[j].second && brr[j].second != crr[k].second && crr[k].second != arr[i].second)
                {
                    ans = max(ans, arr[i].first + brr[j].first + crr[k].first);
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