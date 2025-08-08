#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i,n,vec) for(ll i = 0; i < n; i++) cin >> vec[i];
void solve(){
    ll n,m;
    cin>>n>>m;
    ll ans = 0;
    for(int i=0;i<=60;i++){
        if(m & (1LL<<i)){
            ll temp = n;
            temp >>= (i+1);
            temp *= (1LL<<i);
            if(n & (1LL<<i)){
                temp+=((n%(1LL<<i)+1)%998244353);
            }
            ans+=(temp)%998244353;
        }
    }
    cout<<ans%998244353<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}