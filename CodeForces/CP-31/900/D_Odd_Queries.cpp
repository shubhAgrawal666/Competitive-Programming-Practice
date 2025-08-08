#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n,q;
        cin>>n>>q;
        vector<long long int> arr(n);
        long long int sum = 0;
        vector<long long int> presum(n);
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            presum[i] = sum;
        }
        for(long long int i=1;i<=q;i++){
            long long int l,r,k;
            cin>>l>>r>>k;
            if((sum-(presum[r-1]-presum[l])+(r-l+1)*k)%2==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}