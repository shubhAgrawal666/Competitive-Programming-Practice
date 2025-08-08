#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    cin>>n>>m;
    multiset<int> p;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        p.insert(x);
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        if(p.empty()){
            cout<<-1<<'\n';
            continue;
        }
        else{
            if(a<*p.begin()){
                cout<<-1<<'\n';
                continue;
            }
            else{
                auto it = p.upper_bound(a);
                it--;
                cout<<*it<<'\n';
                p.erase(it);
            }
        }
    }
    return 0;
}