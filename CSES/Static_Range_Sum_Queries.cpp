#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<ll> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n,q;
    cin>>n>>q;
    vec(int,arr,n);
    fori(i,n,arr);
    vec(int,pre,n);
    pre[0] = arr[0];
    for(int i = 1;i<n;i++){
        pre[i] = pre[i-1]+arr[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l==0){
            cout<<(long long)pre[r]<<endl;
        }
        else{
            cout<<(long long)pre[r]-pre[l-1] <<endl;
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}