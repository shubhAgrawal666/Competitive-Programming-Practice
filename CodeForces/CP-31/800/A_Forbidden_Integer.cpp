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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES\n"
                 << n << "\n";
            for (int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }
            cout<<"\n";
        }
        else
        {
            if (n % 2 == 0&&k>=2)
            {
                cout << "YES\n"
                     << (n / 2) << "\n";
                for (int i = 1; i <= n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout<<"\n";
            }
            else
            {
                int sum = 0;
                vector<int> ans;
                for (int i = 2; i <=k;)
                {
                    if (sum < n)
                    {
                        sum += i;
                        ans.push_back(i);
                    }
                    else if(sum==n){
                        break;
                    }
                    else if(sum>n){
                        sum-=2*i;
                        ans.pop_back();
                        ans.pop_back();
                        i++;
                    }
                }
                if(sum==n){
                    cout<<"YES\n"<<ans.size()<<"\n";
                    for(int i=0;i<ans.size();i++){
                        cout<<ans[i]<<" ";
                    }
                    cout<<"\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}