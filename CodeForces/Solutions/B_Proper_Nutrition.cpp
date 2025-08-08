#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,a,b;
    cin>>n>>a>>b;
    for(int i=0;a*i<=n;i++){
        if((n-(a*i))%b==0){
            cout<<"YES"<<endl;
            cout<<i<<" "<<(n-(a*i))/b<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}