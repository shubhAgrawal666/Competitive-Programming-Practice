#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    string ans = "";
    while (!s.empty())
    {
        if (s.size() % 2 == 0)
        {
            ans = s[0] + ans;
            s.erase(s.begin());
        }
        else
        {
            ans = ans + s[0];
            s.erase(s.begin());
        }
    }
    cout << ans;
    return 0;
}