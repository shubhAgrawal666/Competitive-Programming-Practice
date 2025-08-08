#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        if(s[0]!='<'||s[1]!='/'||s[s.size()-1]!='>'){
            cout<<"Error"<<endl;
            continue;
        }
        else{
            bool b = true;
            for(int i=2;i<s.length()-1;i++){
                if(!(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9')){
                    cout<<"Error"<<endl;
                    b = false;
                    break;
                }
            }
            if(b){
                cout<<"Success"<<endl;
            }
        }
    }
    return 0;
}