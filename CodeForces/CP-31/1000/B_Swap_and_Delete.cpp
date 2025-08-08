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
        int count1 = 0;
        int count0 = 0;
        for(char c : s){
            if(c == '1') count1++;
            else count0++;
        }
        if(count1==count0){
            cout<<0<<endl;
        }
        else{
            string result = "";
            int ans = 0;
            for(int i = 0;i<s.size();i++){
                if(s[i]=='1'&&count0>0){
                    result+= '0';
                    count0--;
                }
                else if(s[i]=='0'&&count1>0){
                    result+= '1';
                    count1--;
                }
                else{
                    ans+= s.size() - i;
                    break;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}