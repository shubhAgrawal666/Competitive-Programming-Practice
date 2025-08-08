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
        int ans = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ans=ans^x;
        }
        if(ans==0){
            cout<<0<<endl;
        }
        else{
            if(n%2==0){
                cout<<-1<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}