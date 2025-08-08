#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        vector<int> count(101,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            count[arr[i]]++;
        }
        if(count[0]==0){
            cout<<0<<endl;
            continue;
        }
        int temp = 0;
        for(int i=0;i<=100;i++){
            if(count[i]==0){
                temp = i;
                break;
            }
        }
        int mex2 = 0;
        for(int i=0;i<=temp;i++){
            if(count[i]<=1){
                mex2 = i;
                break;
            }
        }
        cout<<temp+mex2<<endl;
    }
    return 0;
}