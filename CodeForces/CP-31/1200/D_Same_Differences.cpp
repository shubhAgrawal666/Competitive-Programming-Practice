#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> arr(n);
        map<long long int,long long int> mp;
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]= arr[i]-i;
            mp[arr[i]]++;
        }
        long long int ans = 0;
        for(auto ele : mp){
            ans+=((ele.second)*(ele.second-1))/2;
        }
        cout<<ans<<'\n';
    }
    return 0;
}