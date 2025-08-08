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
        int i = 1;
        while(count<n){
            if(i%3!=0&&i%10!=3){
                count++;
            }
            if(count==n){
                cout<<i<<endl;
            }
            i++;
        }
    }
    return 0;
}