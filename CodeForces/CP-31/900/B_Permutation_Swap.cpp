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
            arr[i] = abs(arr[i]-i-1);
        }
        int ans = arr[0];
        for(auto ele : arr){
            ans = gcd(ans,ele);
        }
        cout<<ans<<endl;
    }
    return 0;
}