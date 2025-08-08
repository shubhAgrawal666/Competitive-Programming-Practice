#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,c;
    cin >> n >> c;
    map<int,int> mp;
    int prev = 0;
    for(int i=0;i<n;i++){
        int l,r,ci;
        cin>>l>>r>>ci;
        mp[l]+=ci;
        mp[r+1]-=ci;
    }
    long long int ans = 0;
    for(auto it = mp.begin();it!=mp.end();it++){
        if(it!=mp.begin()){
            it--;
            int temp = (*it).second;
            it++;
            (*it).second+=temp;
        }
        if(())
        //cout<<(*it).first<<":"<<(*it).second<<" ";
    }
    return 0;
}