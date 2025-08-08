#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    ll a,b;
    cin>>a>>b;
    if(b>a){
        swap(a,b);
    }
    if(a==b){
        cout<<0<<endl;
        return;
    }
    int cnt = 0;
    while(a%2==0&&a!=b){
        a=a/2;
        cnt++;
    }
    // while(b%2==0){
    //     b=b/2;
    //     cnt++;
    // }
    if(a!=b){
        cout<<-1<<endl;
    }
    else{
        // cout<<cnt<<endl;
        int ans = 0;
        ans+=cnt/3;
        cnt=cnt%3;
        ans+=cnt/2;
        cnt=cnt%2;
        ans+=cnt;
        cnt = 0;
        cout<<ans<<endl;
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