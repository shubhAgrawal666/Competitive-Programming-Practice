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
        string s;
        cin >> s;
        int n = s.size();
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int even = 0;
        int evens = 0;
        int odd = 0;
        int odds = 0;
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (mp[i] != 0)
            {
                if (mp[i] % 2 == 0)
                {
                    even++;
                    evens += mp[i];
                }
                else
                {
                    odd++;
                    odds += mp[i];
                }
            }
        }
        int ans = 0;
        int reserve = 0;
        for(char ch = 'a';ch<='z';ch++){
            if(mp[ch]==1){
                reserve++;
            }
            else if(mp[ch]>=2){
                ans++;
            }
        }
        cout<<ans+(reserve/2)<<endl;
    }
    return 0;
}