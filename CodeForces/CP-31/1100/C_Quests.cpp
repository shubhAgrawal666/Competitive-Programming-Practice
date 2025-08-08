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
    vector<int> arr(n);
    vector<int> brr(n);
    vector<int> pre(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
            pre[i] = arr[i];
        }
        else{
            pre[i] = pre[i-1]+arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cin>>brr[i];
    }
    int ans = 0;
    int maxi = 0;
    for(int i=0;i<min(k,n);i++){
        maxi = max(maxi,brr[i]);
        ans = max(ans,pre[i]+(k-(i+1))*maxi);
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}