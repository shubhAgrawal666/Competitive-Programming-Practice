#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        if(2*x<=n&&2*y<=m){
            cout<<1<<" "<<m<<" "<<n<<" "<<1<<"\n";
        }
        else if(2*x<=n&&2*y>m){
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
        }
        else if(2*x>n&&2*y<=m){
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<"\n";
        }
        else{
            cout<<1<<" "<<m<<" "<<n<<" "<<1<<"\n";
        }
    }
    return 0;
}