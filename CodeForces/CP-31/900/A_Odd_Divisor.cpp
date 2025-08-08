#include<bits/stdc++.h>
using namespace std;
bool isPowerof2(long long int n){
    int count = 0;
    while(n>0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    if(count==1){
        return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(isPowerof2(n)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}