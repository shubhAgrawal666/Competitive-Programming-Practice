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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count1=0;
        int count0=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                count1++;
            }
            else if(a[i]==0){
                count0++;
            }
        }
        if(count1==0){
            cout<<0<<endl;
        }
        else{
            if(count0==0){
                cout<<count1<<endl;
            }
            else{
                cout<<(long long int)pow(2,count0)*count1<<endl;
            }
        }
    }
    return 0;
}