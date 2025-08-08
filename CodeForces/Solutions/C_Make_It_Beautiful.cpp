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
    vector<int> cnt(60);
    for(int i=0;i<31;i++){
        for(int j=0;j<n;j++){
            if(arr[j]&1==1){
                cnt[i]++;
            }
            arr[j]=arr[j]>>1;
        }
    }
    ll ans = 0;
    for(int i=0;i<60;i++){
        while(cnt[i]<n&&k>=(1LL<<i)){
            cnt[i]+=1;
            k-=(1LL<<i);
        }
        ans+=cnt[i];
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