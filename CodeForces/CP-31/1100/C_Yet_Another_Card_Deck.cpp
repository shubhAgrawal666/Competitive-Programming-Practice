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
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (mp[arr[i]] == 0)
        {
            mp[arr[i]] = i + 1;
        }
    }
    while (q--)
    {
        int x;
        cin >> x;
        cout << mp[x] << " ";
        for (auto &it : mp)
        {
            if (it.first != x && it.second < mp[x])
            {
                it.second = it.second + 1;
            }
        }
        mp[x] = 1;
    }
    cout << endl;
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