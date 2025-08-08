#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin>>n;
    vector<long long int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<long long int,long long int> po;
    long long int start = 0,ans = 0;
    for(long long int i=0;i<n;i++){
        if(po.find(arr[i])!=po.end()){
            start = max(start,po[arr[i]]+1);
        }
        po[arr[i]] = i;
        ans = max(ans,i-start+1);
    }
    cout<<ans;
    return 0;
}