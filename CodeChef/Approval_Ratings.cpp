#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        vector<int> arr(5);
        int sum = 0;
        for(int i=0;i<5;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum>=35){
            cout<<0<<endl;
        }
        else{
            int ans = 0;
            sort(arr.begin(),arr.end());
            for(int i=0;i<=4;i++){
                if(sum-arr[i]+10>=35){
                    ans+=100;
                    sum=sum-arr[i]+10;
                    arr[i] = 10;
                    break;
                }
                else{
                    ans+=100;
                    sum = sum-arr[i]+10;
                    arr[i] = 10;
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}