#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i,n,vec) for(ll i = 0; i < n; i++) cin >> vec[i];
void solve(){
    ll x,y;
    cin>>x>>y;
    if(gcd(x,y)>1){
        cout<<0<<endl;
    }
    else{
        if(gcd(x,y+1)>1||gcd(x+1,y)>1){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
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