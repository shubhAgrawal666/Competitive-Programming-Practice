#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n,k,b,s;
        cin>>n>>k>>b>>s;
        if(s < b * k || s > b * k + (n) * (k - 1)) {
            cout << "-1\n";
            continue;
        }
        vector<long long int> ans(n, 0);
        ans[0] = b * k;
        s -= b * k;
        for(int i =0;i<n;i++){
            long long int add = min(s,k-1);
            ans[i]+=add;
            s-= add;
        }
        for(int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}