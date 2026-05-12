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
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<long long int, long long int> mp;
    long long int start = 0;
    long long int end = 0;
    long long int ans = INT_MIN;
    while (end < n && mp[arr[end]] == 0)
    {
        mp[arr[end]]++;
        end++;
    }
    ans = max(end - start, ans);
    while (end < n && start < n)
    {
        mp[arr[start]]--;
        start++;
        while (end < n && mp[arr[end]] == 0)
        {
            mp[arr[end]]++;
            end++;
        }
        ans = max(end - start, ans);
    }
    cout << ans << endl;
    return 0;
}