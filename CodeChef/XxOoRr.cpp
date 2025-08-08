#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    int rnd = 0;
    int maxi = *max_element(arr.begin(),arr.end());
    while(rnd<(int)log2(maxi)+1){
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0&&arr[i]&1==1){
                cnt++;
            }
            if(arr[i]!=0){
                arr[i]=arr[i]>>1;
            }
        }
        ans+=ceil((float)cnt/k);
        rnd++;
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}