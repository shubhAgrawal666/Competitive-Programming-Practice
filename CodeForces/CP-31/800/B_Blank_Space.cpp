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
        int count = 0;
        int ans = 0;
        for(int i = 0;i<n;i++){
            int x;
            cin>>x;
            if(x==0){
                count++;
            }
            else{
                count = 0;
            }
            ans = max(ans,count);
        }
        cout<<ans<<endl;
    }
    return 0;
}