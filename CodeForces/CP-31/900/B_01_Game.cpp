#include<bits/stdc++.h>
using namespace std;
int fun(string &s){
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'&&s[i+1]=='0'||s[i+1]=='1'&&s[i]=='0'){
            return i;
        }
    }
    return -1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool flag=true;
        while(fun(s)!=-1){
            int i=fun(s);
            s.erase(i,2);
            flag = !flag;
        }
        if(flag){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
    return 0;
}