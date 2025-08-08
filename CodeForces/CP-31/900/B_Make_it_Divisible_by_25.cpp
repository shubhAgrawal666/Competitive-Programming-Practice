#include<bits/stdc++.h>
using namespace std;
int fun(string it, string s, int n){
    int j = 1;
    int ans = 0;
    for(int i = n-1;j>=0&&i>=0;i--){
        if(s[i]==it[j]){
            j--;
        }
        else{
            ans++;
        }
    }
    if(j>=0){
        ans = INT_MAX;
    }
    return ans;
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
        int n = s.size();
        int ans = INT_MAX;
        vector<string> vec = {"00","25","50","75"};
        for(auto it:vec){
            ans = min(ans,fun(it,s,n));
        }
        cout<<ans<<endl;
    }
    return 0;
}