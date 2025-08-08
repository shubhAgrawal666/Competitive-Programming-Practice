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
    int cnt1 = 0;
    int ans1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            cnt1++;
            ans1 = max(ans1, cnt1);
        }
        else
        {
            ans1 = max(ans1, cnt1);
            cnt1 = 0;
        }
        ans1 = max(ans1, cnt1);
    }
    int cnt0 = 0;
    int ans0 = 0;
    int l = -1;
    int r = -1;
    for (int i = 0; i < n; i++)
    {
        
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