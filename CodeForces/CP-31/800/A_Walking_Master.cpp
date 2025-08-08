#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int diffx = c-a;
        int diffy = d-b;
        int ans = 0;
        if(diffx>diffy||diffy<0){
            cout<<-1<<endl;
            continue;
        }
        else{
            if(diffx<0){
                ans+= abs(diffx);
                diffx = 0;
                ans+=2*diffy;
            }
            else{
                ans+=diffx;
                diffy-=diffx;
                ans+=2*diffy;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}