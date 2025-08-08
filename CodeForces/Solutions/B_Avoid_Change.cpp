#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,r;
    cin>>k>>r;
    for(int i=1;i<=10;i++){
        if(((k*i)%10)%10==r||((k*i)%10)%10==0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}