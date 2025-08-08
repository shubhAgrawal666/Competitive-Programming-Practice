#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int odd = 0;
        for (auto i : mp)
        {
            if (i.second % 2 != 0)
            {
                odd++;
            }
        }
        if (odd - k <= 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (odd - k >= 2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}