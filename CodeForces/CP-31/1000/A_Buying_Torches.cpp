#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i,n,vec) for(ll i = 0; i < n; i++) cin >> vec[i];
void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    ll reqc = k;
    ll reqs = k+(k*y);
    if((reqs-1)%(x-1)!=0){
        cout<<((reqs-1)/(x-1))+1+k<<endl;
        return;
    }
    cout<<(reqs-1)/(x-1)+reqc<<endl;
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