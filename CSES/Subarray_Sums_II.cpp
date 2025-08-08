#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<ll> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    fori(i,n,arr);
    vec(int,pre,n);
    map<ll,ll> mp;
    ll sum = 0;
    ll ans = 0;
    mp[0] = 1;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
        ans+=mp[sum-x];
        mp[sum]++;
    }
    cout<<ans<<endl;
    return 0;
}