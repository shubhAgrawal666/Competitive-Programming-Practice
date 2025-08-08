#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    for(int T = 1;T<=t;T++){
        int n,r;
        cin>>n>>r;
        bool isPossible = true;
        vector<pair<int,int>> arr;
        map<pair<int,int>,int> count;
        for(int i=1;i<=r;i++){
            int x;
            cin>>x;
            int d;
            cin>>d;
            arr.push_back({x,d});
            count[{x,d}]++;
        }
        for(auto e : count){
            if(e.second>=2){
                isPossible = false;
                break;
            }
        }
        if(isPossible){
            cout<<"Scenario #"<<T<<": possible"<<endl;
        }
        else{
            cout<<"Scenario #"<<T<<": impossible"<<endl;
        }
    }
    return 0;
}