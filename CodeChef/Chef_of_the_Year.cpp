#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<pair<string,string>> vec;
    for(int i=0;i<n;i++){
        string N,C;
        cin>>N>>C;
        vec.push_back({N,C});
    }
    map<string,int> mp;
    for(int i=1;i<=m;i++){
        string N;
        cin>>N;
        mp[N]++;
    }
    int max = INT_MIN;
    map<string,int> mpp;
    string ans = "";
    for(auto ele : mp){
        for(auto & it : vec){
            if(it.first==ele.first){
                mpp[(it).second]+=ele.second;
            }
        }
        if(ele.second>max){
            max = ele.second;
            ans = ele.first;
        }
        else if(ele.second==max){
            if(ele.first<ans){
                max = ele.second;
                ans = ele.first;
            }
        }
    }
    int MAX = INT_MIN;
    string ANS = "";
    for(auto ele : mpp){
        if(ele.second>MAX){
            MAX = ele.second;
            ANS = ele.first;
        }
        else if(ele.second==MAX){
            if(ele.first<ANS){
                MAX = ele.second;
                ANS = ele.first;
            }
        }
    }
    cout<<ANS<<'\n'<<ans<<'\n';
    return 0;
}