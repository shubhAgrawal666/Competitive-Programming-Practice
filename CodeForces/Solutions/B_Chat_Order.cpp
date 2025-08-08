#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    vector<string> st;
    while(t--){
        string s;
        cin>>s;
        st.push_back(s);
    }
    unordered_set<string> seen;
    vector<string> ans;
    for(int i=st.size()-1;i>=0;i--){
        if(seen.find(st[i])==seen.end()){
            seen.insert(st[i]);
            ans.push_back(st[i]);
        }
    }
    for(auto ele:ans){
        cout<<ele<<'\n';
    }
    return 0;
}