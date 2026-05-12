#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin >> n;
    vector<long long int> arr(n);
    long long int temp = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp = gcd(temp, arr[i]);
    }
    long long int count = 0;
    for (long long int i = 0; i < n; i++)
    {
        while ((arr[i] % 2 == 0 || arr[i] % 3 == 0) && arr[i] > temp)
        {
            if (arr[i] % 2 == 0)
            {
                arr[i] /= 2;
            }
            else if (arr[i] % 3 == 0)
            {
                arr[i] /= 3;
            }
            count++;
        }
        if (arr[i] != temp)
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << count;
    return 0;
}