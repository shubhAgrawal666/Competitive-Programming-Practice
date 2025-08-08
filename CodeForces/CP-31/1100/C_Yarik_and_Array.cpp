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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans = INT_MIN;
    int i = 0;
    int j = 0;
    ll sum = 0;
    while (j < n)
    {
        if (sum < 0)
        {
            sum = 0;
            i = j;
        }
        if (i < j)
        {
            if ((arr[j] ^ arr[j - 1]) & 1)
            {
                sum += arr[j];
            }
            else
            {
                sum = arr[j];
                i = j;
            }
        }
        else
        {
            sum = arr[j];
        }
        ans = max(ans, sum);
        j++;
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