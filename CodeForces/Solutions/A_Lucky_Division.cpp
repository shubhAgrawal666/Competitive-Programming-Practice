#include<bits/stdc++.h>
using namespace std;
bool isGood(int n){
    while(n!=0){
        if(n%10!=4&&n%10!=7){
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
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(isGood(i)&&n%i==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}