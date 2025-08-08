#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        if(n%2==1||n<4){
            cout<<-1<<endl;
            continue;
        }
        long long int ans = n%6==0?n/6:(n/6)+1;
        cout<<ans<<" "<<n/4<<endl;
    }
    return 0;
}