#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        int i = 0;
        while (i < n)
        {
            cin >> arr[i];
            i++;
        }
        unordered_map<int, int> mp;
        int start = 0, end = 0;
        int ans = 0;
        while (end < n)
        {
            mp[arr[end]]++;
            while ((int)mp.size() == k)
            {
                mp[arr[start]]--;
                if (mp[arr[start]] == 0)
                    mp.erase(arr[start]);
                start++;
            }
            ans = max(ans, end - start + 1);
            end++;
        }
        cout << ans << "\n";
    }
    return 0;
}
