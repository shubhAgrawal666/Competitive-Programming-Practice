#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum % 3 == 0)
    {
        cout << "No" << endl;
        return;
    }
    ll idx = -1;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (sum % 3 == 0)
        {
            idx = i;
        }
        sum -= arr[i];
    }
    // cout << idx << endl;
    reverse(arr.begin(), arr.begin() + (idx + 2));
    int add = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    for (ll i = 0; i < n; i++)
    {
        add += arr[i];
        if (add % 3 == 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
