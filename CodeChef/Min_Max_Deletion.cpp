#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i,n,vec) for(ll i = 0; i < n; i++) cin >> vec[i];
void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll score = 0;
    for(ll i=0;i<n-1;i++){
        score+=min(arr[i],arr[i+1]);
    }
    while(q--){
        ll i,x;
        cin>>i>>x;
        i--;
        if(i>0){
            score-=min(arr[i],arr[i-1]);
        }
        if(i<n-1){
            score-=min(arr[i],arr[i+1]);
        }
        arr[i] = x;
        if(i>0){
            score+=min(arr[i],arr[i-1]);
        }
        if(i<n-1){
            score+=min(arr[i],arr[i+1]);
        }
        cout<<score<<endl;
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