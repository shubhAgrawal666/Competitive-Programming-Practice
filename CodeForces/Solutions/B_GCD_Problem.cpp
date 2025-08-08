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
        int k = 1;
        for(int i = n-3;i>1;i--){
            int j = n-i-1;
            if(gcd(i,j)==1){
                cout<<i<<" "<<j<<" "<<k<<endl;
                break;
            }
        }
    }
    return 0;
}