#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int sum1 = 0;
    int sum2 = 0;
    // for(int i=0;i<2*n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<=n-1;i++){
        sum1+=arr[i];
        sum2+=arr[n+i];
    }
    // cout<<sum1<<" "<<sum2<<endl;
    if(sum1==sum2){
        cout<<-1<<endl;
    }
    else{
        for(int i=0;i<2*n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}