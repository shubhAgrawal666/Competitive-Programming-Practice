#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> cnt(31);
    for(int i=0;i<31;i++){
        for(int j=0;j<n;j++){
            if(arr[j]&1==1){
                cnt[i]++;
            }
            arr[j] = arr[j]>>1;
        }
    }
    int ans = 0;
    for(int i=0;i<cnt.size();i++){
        if(cnt[i]>=2){
            ans+=(1<<i);
        }
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