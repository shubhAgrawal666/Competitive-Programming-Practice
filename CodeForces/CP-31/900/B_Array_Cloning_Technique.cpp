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
        map<int,int> mp;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
            maxi = max(maxi,mp[arr[i]]);
        }
        //cout<<maxi<<endl;
        if(maxi==n){
            cout<<0<<endl;
            continue;
        }
        int ans = 0;
        int cnt = n - maxi;
        while(cnt>0){
            ans++;
            ans+=min(maxi,cnt);
            cnt-=min(maxi,cnt);
            maxi+=min(maxi,cnt);
            if(cnt<=0){
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}