#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        long long int sum=0;
        long long int ans = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%x!=0){
                ans+=a[i]/x+1;
            }
            else{
                ans+=a[i]/x;
            }
        }
        cout<<(long long int)ceil(sum/(double)x)<<" "<<ans<<endl;
    }
    return 0;
}