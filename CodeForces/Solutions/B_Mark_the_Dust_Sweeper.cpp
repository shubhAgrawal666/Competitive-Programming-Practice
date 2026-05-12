#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> arr(n);
        long long int ans = 0;
        bool b = false;
        for (long long int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] != 0)
            {
                b = true;
            }
            if (b)
            {
                if (i != n - 1)
                {
                    if (arr[i] == 0)
                    {
                        ans += 1;
                    }
                    else
                    {
                        ans += arr[i];
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}