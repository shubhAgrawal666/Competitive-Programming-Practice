#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        set<pair<int,int>> st;
        for(int i=1;i<=k;i++){
            int x,y;
            cin>>x>>y;
            pair<int,int> p = {x,y};
            st.insert(p);
        }
        int count = 4*k;
        for(auto ele : st){
            int x = ele.first;
            int y = ele.second;
            if(st.find({x-1,y})!=st.end()){
                count--;
            }
            if(st.find({x,y+1})!=st.end()){
                count--;
            }
            if(st.find({x+1,y})!=st.end()){
                count--;
            }
            if(st.find({x,y-1})!=st.end()){
                count--;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}