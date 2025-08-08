#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long int n,k;
    cin>>n>>k;
    if(n%2==0){
        cout<<"YES"<<endl;
    }
    else{
        if(k%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
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