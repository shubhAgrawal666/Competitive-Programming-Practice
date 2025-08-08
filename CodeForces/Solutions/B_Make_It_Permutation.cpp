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
    cout<<2*(n-1)<<endl;
    cout<<1<<" "<<2<<" "<<n<<endl;
    for(int i=2;i<=n-1;i++){
        cout<<i<<" "<<1<<" "<<i<<endl;
        cout<<i<<" "<<i+1<<" "<<n<<endl;
    }
    cout<<n<<" "<<1<<" "<<n<<endl;
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