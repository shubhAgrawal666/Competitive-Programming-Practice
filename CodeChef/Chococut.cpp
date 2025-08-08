#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int ans1 = 0;
        int ans2 = 0;
        for(int i=0;i<=m;i++){
            if(i*n>=k){
                ans1 = i;
                break;
            }
        }
        for(int i=0;i<=n;i++){
            if(i*m>=k){
                ans2 = i;
                break;
            }
        }
        cout<<max(((m-ans1)*n),((n-ans2)*m))<<endl;
    }
    return 0;
}