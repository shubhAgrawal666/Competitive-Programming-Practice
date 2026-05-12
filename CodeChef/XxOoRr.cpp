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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    vector<int> cnt(32);
    for (int i = 0; i < 32; i++)
    {
        int val = (1LL << i);
        for (int j = 0; j < n; j++)
        {
            if ((arr[j] & val) == val)
            {
                cnt[i]++;
                arr[j] = arr[j] ^ val;
            }
        }
    }
    for (int i = 0; i < 32; i++)
    {
        ans += ceil((double)(cnt[i]) / k);
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