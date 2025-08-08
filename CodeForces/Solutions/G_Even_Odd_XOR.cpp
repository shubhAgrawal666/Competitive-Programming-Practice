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
    if(n==3){
        cout<<"1 2 3"<<endl;
        return;
    }
    stack<int> even,odd;
    int f = 2;
    for(int i=0;i<n/2;i++){
        even.push(f);
        odd.push(f+1);
        f+=2;
    }
    if((n/2)&1){
        int p = odd.top();
        p^=1;
        odd.pop();
        int q = 1LL<<20;
        p^=q;
        odd.top() ^= q;
        odd.push(p);
    }
    for(int i=1;i<=n;i++){
        if((n&1)&&i==n){
            cout<<0<<" ";
        }
        else if(i&1){
            cout<<odd.top()<<" ";
            odd.pop();
        }
        else{
            cout<<even.top()<<" ";
            even.pop();
        }
    }
    cout<<endl;
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