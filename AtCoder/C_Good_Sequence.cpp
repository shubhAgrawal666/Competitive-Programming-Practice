#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    int count = 0;
    for(auto ele : mp){
        if(ele.first<ele.second){
            count+=ele.second-ele.first;
        }
        else if(ele.first>ele.second){
            count+=ele.second;
        }
    }
    cout<<count;
    return 0;
}