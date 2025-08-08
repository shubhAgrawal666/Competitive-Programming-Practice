#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<ll> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q;
    cin>>n>>q;
    vec(int,arr,n);
    fori(i,n,arr);
    vector<ll> cnt(n);
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        cnt[l]++;
        if(r!=n-1){
            cnt[r+1]--;
        }
    }
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++){
        if(i!=0){
            cnt[i] += cnt[i-1];
        }
    }
    sort(cnt.begin(),cnt.end());
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans+=cnt[i]*arr[i];
    }
    cout<<ans<<endl;
    return 0;
}