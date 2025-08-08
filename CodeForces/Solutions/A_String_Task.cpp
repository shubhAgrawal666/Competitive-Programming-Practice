#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'){
            s.erase(i,1);
            i--;
        }
        else{
            s.insert(s.begin()+i,1,'.');
            i++;
            if(s[i]>='A'&&s[i]<='Z'){
                s[i] = s[i]-'A'+'a';
            }
        }
    }
    cout<<s;
    return 0;
}