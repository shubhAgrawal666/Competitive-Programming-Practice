#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n+1,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int max = arr[0];
        //arr.push_back(2*(x-arr[n-1]));
        for(int i=1;i<=n-1;i++){
            if(arr[i]-arr[i-1]>=max){
                max = arr[i]-arr[i-1];
            }
        }
        if(2*(x-arr[n-1])>=max){
            max = 2*(x-arr[n-1]);
        }
        cout<<max<<endl;
    }
    return 0;
}