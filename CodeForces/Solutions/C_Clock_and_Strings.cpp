#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a-b>c-d){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}