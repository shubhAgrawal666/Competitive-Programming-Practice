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
    int n, x;
    cin >> n >> x;
    vector<vector<int>> arr(3);
    for (int i = 0; i < 3; i++)
    {
        int s = 0;
        arr[i].push_back(s);
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            if ((s | a) != s)
            {
                s |= a;
                arr[i].push_back(s);
            }
        }
    }
    for (auto A : arr[0])
    {
        for (auto B : arr[1])
        {
            for (auto C : arr[2])
            {
                if ((A | B | C) == x)
                {
                    cout << "Yes" << endl;
                    return;
                }
            }
        }
    }
    cout << "No" << endl;
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