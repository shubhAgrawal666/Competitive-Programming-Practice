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
    string s;
    cin >> s;
    if (count(s.begin(), s.end(), '1') != count(s.begin(), s.end(), '0'))
    {
        cout << -1 << endl;
        return;
    }
    vector<int> ans;
    int l = 0;
    int r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            l++;
            r--;
        }
        else
        {
            if (s[l] == s[r] && s[r] == '1')
            {
                s.insert(l, "01");
                ans.push_back(l);
                r = r + 2;
            }
            else
            {
                s.insert(r + 1, "01");
                ans.push_back(r + 1);
                r = r + 2;
            }
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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