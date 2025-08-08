#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i,n,vec) for(ll i = 0; i < n; i++) cin >> vec[i];
void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(*max_element(arr.begin(),arr.end())==0){
        cout<<"YES"<<endl;
        return;
    }
    ll st = (log2(*max_element(arr.begin(),arr.end()))/log2(k));
    ll start = pow(k,st);
    for(ll i=start;i>0;i=i/k){
        for(ll j=0;j<n;j++){
            if(arr[j]>=i){
                arr[j]-=i;
                break;
            }
        }
    }
    for(ll i=0;i<n;i++){
        if(arr[i]!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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