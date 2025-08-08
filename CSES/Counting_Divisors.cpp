#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                count++;
                if(i*i!=n){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}