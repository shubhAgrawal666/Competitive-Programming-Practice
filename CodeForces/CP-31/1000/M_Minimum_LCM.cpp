#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(string args){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isPrime(n)){
            cout<<1<<" "<<n-1<<endl;
            continue;
        }
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                cout<<n/i<<" "<<n-(n/i)<<'\n';
                break;   
            }
        }
    }
    return 0;
}