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
    vector<ll> cnt(31,0);
    for(ll i=0;i<n;i++){
        ll idx = 30;
        while(arr[i]!=0){
            if(arr[i]&1==1){
                cnt[idx]++;
            }
            idx--;
            arr[i]=arr[i]>>1;
        }
    }
    vector<pair<ll,ll>> a;
    for(ll i=0;i<31;i++){
        if(cnt[i]!=0){
            a.push_back({cnt[i]*(1<<(30-i)),i});
        }
    }
    sort(a.begin(),a.end());
    ll ans = 0;
    ll count = 0;
    for(auto it=a.rbegin();it!=a.rend();it++){
        if(count==k){
            break;
        }
        else if(count<k){
            ans+=(1<<(30-(it->second)));
            count++;
        }
    }
    if(count==k){
        cout<<ans<<endl;
        return;
    }
    else if(count<k){
        ll temp = ans;
        ll j = 0;
        while(temp!=0){
            if(temp&1==0){
                ans+=(1<<j);
            }
            j++;
            temp=temp>>1;
        }
        cout<<ans<<endl;
        return;
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