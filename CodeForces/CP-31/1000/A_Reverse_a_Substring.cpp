#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
bool isSorted(string s,int n){
    for(int i=0;i<n-1;i++){
        if(s[i]>s[i+1]){
            return false;
        }
    }
    return true;
}
void solve(){
    int n;
    string s;
    cin>>n>>s;
    if(isSorted(s,n)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++){
            if(s[i]>s[i+1]){
                cout<<i+1<<" "<<i+2<<endl;
                return;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}