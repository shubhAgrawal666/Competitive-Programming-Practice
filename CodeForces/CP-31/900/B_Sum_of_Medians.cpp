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
        vector<int> a(n*k);
        for(int i=0;i<n*k;i++){
            cin>>a[i];
        }
        long long int ans = 0;
        int cnt = 0;
        int ptr = n*k-1-(n/2);
        while(cnt!=k){
            cnt++;
            ans += a[ptr];
            ptr -= (1+(n/2));
        }
        cout<<ans<<endl;
    }
    return 0;
}