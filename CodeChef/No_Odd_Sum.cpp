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
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count1 % 2 == 0)
    {
        count1 = count1 / 2;
        cout << min(count1, count2) << endl;
    }
    else
    {
        cout << count2 << endl;
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