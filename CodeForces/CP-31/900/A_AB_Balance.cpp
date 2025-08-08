#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        int counta = 0;
        int countb = 0;
        if(s[0]==s[n-1]){
            cout<<s<<endl;
        }
        else{
            s[n-1] = s[0];
            cout<<s<<endl;
        }
    }
    return 0;
}