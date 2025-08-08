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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int maxi = *max_element(arr.begin(), arr.end());
        int mini = *min_element(arr.begin(), arr.end());
        if (maxi == mini)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << maxi << " " << mini << " ";
            // sort(arr.begin(), arr.end());
            for (int i = n - 2; i >= 1; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}