#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n;
    string s;
    cin>>n>>s;
    int cnt1 = 0;
    int cnt0 = 0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            if(s[i]=='1'){
                cnt1++;
            }
            else{
                cnt0++;
            }
        }
    }
    cout<<max(cnt1,cnt0)<<endl;
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