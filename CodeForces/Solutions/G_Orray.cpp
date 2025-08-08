#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i,n,vec) for(ll i = 0; i < n; i++) cin >> vec[i];
void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<ll> vis(n,0);
    vector<ll> ans;
    ll mask = 0;
    for(ll it = 30;it>=0;it--){
        ll maxMask = mask;
        ll idx = -1;
        for(ll i=0;i<n;i++){
            if(vis[i]==0&&(arr[i]|mask)>maxMask){
                maxMask = (arr[i]|mask);
                idx = i;
            }
        }
        if(idx==-1){
            break;
        }
        else{
            vis[idx] = 1;
            ans.push_back(arr[idx]);
            mask|=maxMask;
        }
    }
    for(ll i=0;i<n;i++){
        if(vis[i]==0){
            ans.push_back(arr[i]);
        }
    }
    for(ll i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}