#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    unordered_set<string> st;
    while(t--){
        string s;
        cin>>s;
        st.insert(s);
    }
    cout<<st.size();
    return 0;
}