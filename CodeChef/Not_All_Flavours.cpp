#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        unordered_map<int,int> mp;
        int ans = 0;
        for(int i=1;i<=k;i++){
            mp[i]=-1;
        }
        for(int i=0;i<n;i++){
            ans=max(ans,i-mp[arr[i]]-1);
            mp[arr[i]] = i;
        }
        for(int i=1;i<=k;i++){
            ans = max(ans,n-mp[i]-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}