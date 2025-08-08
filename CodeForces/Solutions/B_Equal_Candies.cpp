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
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mini = min(mini,arr[i]);
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans+=arr[i]-mini;
        }
        cout<<ans<<endl;
    }
    return 0;
}