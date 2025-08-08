#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int a,b;
    cin>>a>>b;
    int ans = a;
    int XR=0;
    for(int i=a-1;i>=(a-(a%4));i--){
        XR=XR^i;
    }
    if(XR==b){
        cout<<ans<<endl;
        return;
    }
    if((XR^b)!=a){
        cout<<ans+1<<endl;
    }
    else{
        cout<<ans+2<<endl;
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