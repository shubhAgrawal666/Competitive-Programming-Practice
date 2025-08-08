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
        int start = 0;
        int end = s.size()-1;
        while(start<end&&s[start]!=s[end]){
            start++;
            end--;
        }
        cout<<end-start+1<<endl;
    }
    return 0;
}