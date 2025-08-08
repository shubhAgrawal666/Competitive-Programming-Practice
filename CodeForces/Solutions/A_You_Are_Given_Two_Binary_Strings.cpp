#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    string x,y;
    cin>>x>>y;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int posx = 0;
    int posy = 0;
    for(int i=0;i<y.size();i++){
        if(y[i]=='1'){
            posy = i;
            break;
        }
    }
    for(int i=posy;i<x.size();i++){
        if(x[i]=='1'){
            posx = i;
            break;
        }
    }
    cout<<posx-posy<<endl;
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