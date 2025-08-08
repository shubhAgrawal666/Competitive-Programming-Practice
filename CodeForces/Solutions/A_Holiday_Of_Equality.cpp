#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=max-arr[i];
    }
    cout<<sum<<"\n";
    return 0;
}