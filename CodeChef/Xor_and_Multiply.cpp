#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i,n,vec) for(ll i = 0; i < n; i++) cin >> vec[i];
void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    ll ans = 0;
    bool flag = true;
    if(b>a){
        swap(a,b);
    }
    for(int i=n-1;i>=0;i--){
        int temp1 = (a&(1<<i));
        int temp2 = (b&(1<<i));
        if(temp1==temp2){
            if(temp1==0){
                ans=(ans|(1<<i));
            }
        }
        else{
            if(flag==true){
                flag = false;
            }
            else{
                if(temp2==0){
                    ans|=(1<<i);
                }
            }
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