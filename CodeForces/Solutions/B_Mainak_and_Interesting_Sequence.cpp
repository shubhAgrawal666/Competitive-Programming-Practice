#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve(){
    int n,m;
    cin>>n>>m;
    if(n>m||n%2==0&&m%2==1){
        cout<<"No"<<endl;
    }
    else{
        if(m%n==0){
            cout<<"Yes"<<endl;
            for(int i = 0;i<n;i++){
                cout<<m/n<<" ";
            }
            cout<<endl;
        }
        else{
            if(n%2==0&&m%2==0){
                cout<<"Yes"<<endl;
                for(int i=1;i<=n-2;i++){
                    cout<<1<<" ";
                }
                cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<endl;
            }
            else if(n%2==1){
                cout<<"Yes"<<endl;
                for(int i=1;i<=n-1;i++){
                    cout<<1<<" ";
                }
                cout<<(m-n+1)<<endl;
            }
        }
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