#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<" "<<0<<endl;
        }
        else{
            if(b>a){
                swap(a,b);
            }
            if(a==b+1){
                cout<<1<<" "<<0<<endl;
            }
            else if(b==0){
                cout<<a<<" "<<0<<endl;
            }
            else{
                cout<<a-b<<" "<<min((a-b)-b%(a-b),b%(a-b))<<endl;
            }
        }
    }
    return 0;
}
