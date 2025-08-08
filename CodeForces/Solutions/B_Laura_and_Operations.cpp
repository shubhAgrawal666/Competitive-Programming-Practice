#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        string ans = "";
        if(abs(b-c)%2==0){
            ans+="1 ";
        }
        else{
            ans+="0 ";
        }
        if(abs(a-c)%2==0){
            ans+="1 ";
        }
        else{
            ans+="0 ";
        }
        if(abs(b-a)%2==0){
            ans+="1 ";
        }
        else{
            ans+="0 ";
        }
        cout<<ans<<endl;
    }
    return 0;
}