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
        vector<long long int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long int ans = 1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]-i<=0){
                ans = 0;
                break;
            }
            ans = ((ans%998244353)*((arr[i]-i)%998244353))%998244353;

        }
        ans = (ans)%998244353;
        cout<<ans<<endl;
    }
    return 0;
}