#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,b,k;
    cin>>a>>b>>k;
    int count = 0;
    for(int i=gcd(a,b);i>=1;i--){
        if(a%i==0&&b%i==0){
            count++;
            if(count==k){
                cout<<i;
                break;
            }
        }
    }
    return 0;
}