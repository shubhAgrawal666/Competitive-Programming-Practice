#include<bits/stdc++.h>
using namespace std;
bool fun(string str){
    for(int i=1;i<=str.length()-2;i++){
        if(str[i]=='0'){
            return true;
        }
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
        string str;
        cin>>str;
        if(str[0]!='1'||(str[str.length()-1]-'0')==9||fun(str)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}