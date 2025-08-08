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
    vector<ll> brr(n);
    for(ll i=0;i<n;i++){
        cin>>brr[i];
    }
    vector<pair<ll,ll>> vect;
    for(ll i=0;i<n;i++){
        vect.push_back({arr[i],brr[i]});
    }
    sort(vect.begin(),vect.end());
    vector<ll> ans(n);
    ans[0] = 0;
    auto it = vect.begin();
    multiset<ll> mst;
    ll sum = 0;
    while(it->first<=k&&it!=vect.end()){
        sum+=it->second;
        mst.insert(it->second);
        if(it->first<n){
            ans[it->first] = sum;
        }
        it++;
    }
    while(it!=vect.end()){
        if(it->second>*mst.begin()){
            sum-=*mst.begin();
            sum+=it->second;
            mst.erase(mst.begin());
            mst.insert(it->second);
        }
        if(it->first<n){
            ans[it->first] = sum;
        }
        it++;
    }
    for(ll i=0;i<n;i++){
        cout<<ans[arr[i]-1]<<" ";
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