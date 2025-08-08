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
        sort(arr.begin(),arr.end());
        int ans = INT_MIN;
        int count = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<=k){
                count++;
            }
            else{
                count = 0;
            }
            ans = max(ans,count);
        }
        cout<<(ans==INT_MIN?0:n-ans-1)<<endl;
    }
    return 0;
}