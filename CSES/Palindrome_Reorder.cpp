#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    int odd = 0;
    string ans = "";
    string temp = "";
    for(auto ele : mp){
        if(ele.second%2==1){
            odd++;
            temp+=ele.first;
        }
    }
    if(odd>1){
        cout<<"NO SOLUTION";
    }
    else{
        for(auto &ele : mp){
            ans+=string(ele.second/2,ele.first);
        }
        string pal = ans;
        pal+=temp;
        reverse(ans.begin(),ans.end());
        pal+=ans;
        cout<<pal;
    }
    return 0;
}