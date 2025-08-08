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
    ll sum = 0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    ll ans = 0;
    for(ll i = 0;i<n;i++){
        sum-=arr[i];
        ans+=(sum-((n-1-i)*arr[i]));
    }
    cout<<ans<<endl;
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