#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = INT_MAX;
        for(int i=1;i<=n;i++){
            int r,c;
            cin>>r>>c;
            if(r>=7){
                ans = min(ans,c);
            }
        }
        if(ans==INT_MAX){
            cout<<-1<<endl;
            continue;
        }
        cout<<ans<<endl;
    }
    return 0;
}