#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((c%2==1&&a>=b)||(c%2==0&&a>b)){
            cout<<"First"<<endl;
        }
        else if((c%2==1&&b>a)||(c%2==0&&b>=a)){
            cout<<"Second"<<endl;
        }
    }
    return 0;
}