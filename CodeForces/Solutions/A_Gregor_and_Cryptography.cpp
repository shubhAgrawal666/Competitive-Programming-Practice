#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int p;
        cin>>p;
        if(p==5){
            cout<<2<<" "<<4<<endl;
        }
        else{
            cout<<2<<" "<<(p-1)/2<<endl;
        }
    }
    return 0;
}