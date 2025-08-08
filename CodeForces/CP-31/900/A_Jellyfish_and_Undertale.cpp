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
        int a, b, n;
        cin >> a >> b >> n;
        vector<long long int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        long long int ans = b;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < a)
            {
                ans += arr[i];
            }
            else
            {
                ans += a - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}