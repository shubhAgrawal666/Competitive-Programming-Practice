#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i,n,vec) for(ll i = 0; i < n; i++) cin >> vec[i];
void solve(){
    ll p,q,r;
    cin>>p>>q>>r;
    vector<ll> cnt(31);
    ll idx = 0;
    while(p!=0){
        if(p&1==1){
            cnt[idx]++;
        }
        p=p>>1;
        idx++;
    }
    idx = 0;
    while(q!=0){
        if(q&1==1){
            cnt[idx]++;
        }
        q=q>>1;
        idx++;
    }
    idx = 0;
    while(r!=0){
        if(r&1==1){
            cnt[idx]++;
        }
        r=r>>1;
        idx++;
    }
    ll ans = 1;
    for(ll i = 0;i<cnt.size();i++){
        if(cnt[i]==1){
            cout<<0<<endl;
            return;
        }
        if(cnt[i]==3){
            ans*=4;
        }
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