#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)         \
    for (int i = 0; i < n; i++) \
        cin >> vec[i];
bool isPal(vector<int> arr)
{
    int l = 0;
    int r = arr.size() - 1;
    while (l < r)
    {
        if (arr[l] != arr[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (isPal(arr))
    {
        cout << "YES" << endl;
        return;
    }
    int l = 0;
    int r = n - 1;
    int x1 = -1;
    int x2 = -1;
    while (l < r)
    {
        if (arr[l] != arr[r])
        {
            x1 = arr[l];
            x2 = arr[r];
            break;
        }
        l++;
        r--;
    }
    vector<int> temp1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x1)
        {
            temp1.push_back(arr[i]);
        }
    }
    if (isPal(temp1))
    {
        cout << "YES" << endl;
        return;
    }
    vector<int> temp2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != x2)
        {
            temp2.push_back(arr[i]);
        }
    }
    if (isPal(temp2))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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