#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n,k;
    cin>>n>>k;
    if(n<k||__builtin_popcount(n)>k){
        cout<<"NO"<<endl;
    }
    else{
        if(n==k){
            cout<<"YES"<<endl;
            for(int i=1;i<=k;i++){
                cout<<1<<" ";
            }
            return;
        }
        vector<int> ans;
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                ans.push_back((1<<i));
            }
        }
        int ptr = 0;
        while(ans.size()!=k){
            while(ans[ptr]==1){
                ptr++;
            }
            ans[ptr]=ans[ptr]/2;
            ans.push_back(ans[ptr]);
        }
        cout<<"YES"<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}