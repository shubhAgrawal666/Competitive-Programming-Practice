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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        for(int i=n-2;i>=0;i--){
            while(arr[i]>=arr[i+1]){
                if(arr[i]==0){
                    ans=-1;
                    break;
                }
                arr[i]>>=1;
                ans++;
            }
            if(ans==-1){
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}