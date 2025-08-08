#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k,s;
    cin>>k>>s;
    int count = 0;
    for(int x = 0;x<=k;x++){
        for(int y = 0;y<=k;y++){
            if(s-x-y>=0&&s-x-y<=k){
                count++;
            }
        }
    }
    cout<<count<<"\n";
    return 0;
}