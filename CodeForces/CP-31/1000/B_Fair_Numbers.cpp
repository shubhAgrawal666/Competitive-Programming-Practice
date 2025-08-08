#include<bits/stdc++.h>
using namespace std;
bool func(long long int n){
    long long int temp = n;
    while(n>0){
        if((n%10!=0)&&(temp%(n%10))!=0){
            return false;
        }
        n=n/10;
    }
    return true;
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
        for(long long int i = n;i<=1e18;i++){
            if(func(i)){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}