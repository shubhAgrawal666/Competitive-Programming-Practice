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
        int n, m;
        string x, s;
        int ans = 0;
        cin >> n >> m >> x >> s;
        while(n<m){
            x+=x;
            ans++;
            n = x.size();
        }
        bool isPossi = true;
        while(ans<=5){
            for(int i=0;i+m<=n;i++){
                isPossi = true;
                if(x.substr(i,m)!=s){
                    isPossi = false;
                    //break;
                }
                if(isPossi){
                    cout<<ans<<endl;
                    break;
                }
            }
            if(isPossi==false){
                x+=x;
                ans++;
                n = x.size();
            }
            else{
                break;
            }
        }
        if(isPossi==false){
            cout<<-1<<endl;
        }
    }
    return 0;
}