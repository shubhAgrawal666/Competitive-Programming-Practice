#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int ans = 0;
        int count = 1;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else{
                ans = max(count,ans);
                count = 1;
            }
        }
        cout<<max(ans,count)+1<<endl;
    }
    return 0;
}