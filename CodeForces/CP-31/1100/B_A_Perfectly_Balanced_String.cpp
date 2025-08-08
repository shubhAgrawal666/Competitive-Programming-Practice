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
    string s;
    cin >> s;
    int n = s.size();
    set<char> st;
    int k;
    for (k = 0; k < n; k++)
    {
        if (st.find(s[k]) == st.end())
        {
            st.insert(s[k]);
        }
        else
        {
            break;
        }
    }
    for (int i = k; i < n; i++)
    {
        if (s[i] != s[i - k])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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