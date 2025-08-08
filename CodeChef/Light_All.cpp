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
    int cnt = 0;
    int cnt0 = 0;
    for(int i=0;i<n-1;){
        if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0')){
            cnt++;
            i+=2;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            cnt0++;
        }
    }
    if(cnt>=cnt0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
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