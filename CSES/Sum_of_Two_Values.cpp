#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x;
    cin>>n>>x;
    if(n==1){
        cout<<"IMPOSSIBLE";
        return 0;
    }
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        arr.push_back({val,i});
    }
    sort(arr.begin(),arr.end());
    auto back = arr.begin();
    auto front = arr.end()-1;
    while(back<front){
        if((*back).first+(*front).first==x){
            cout<<(*back).second+1<<" "<<(*front).second+1;
            return 0;
        }
        else if((*back).first+(*front).first<x){
            back++;
        }
        else{
            front--;
        }
    }
    cout<<"IMPOSSIBLE";
    return 0;
}