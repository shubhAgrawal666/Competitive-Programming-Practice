#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin>>T;
    while(T--){
        string s,t;
        cin>>s>>t;
        unordered_map<char,int> mp2;
        for(int i=0;i<t.size();i++){
            mp2[t[i]]++;
        }
        string ans = "";
        for(int i=s.size()-1;i>=0;i--){
            if(find(t.rbegin(),t.rend(),s[i])!=t.rend()&&0<mp2[s[i]]){
                ans+=s[i];
                mp2[s[i]]--;
            }
        }
        reverse(ans.begin(),ans.end());
        if(ans==t){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}