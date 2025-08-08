#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if(k!=4){
            int ans = INT_MAX;
            for(int i = 0; i < n; i++) {
                if(a[i]%k!=0){
                    ans = min(ans, k-(a[i] % k));
                }
                else{
                    ans = 0;
                    break;
                }
            }
            cout<<ans<<"\n";
        }
        else{
            int cnt = 0;
            int ans = INT_MAX;
            for(int i=0;i<n;i++){
                if(a[i]%4==0){
                    cout<<0<<"\n";
                    cnt = -1; // To break the loop
                    break;
                }
                else if(a[i]%2==0){
                    cnt++;
                }
                else{
                    ans = min(ans, 4 - (a[i] % 4));
                }
            }
            if(cnt !=-1){
                if(cnt>=2){
                    cout<<0<<'\n';
                }
                else{
                    cout<<min(2-cnt,ans)<<'\n';
                }
            }
        }
    }
    return 0;
}