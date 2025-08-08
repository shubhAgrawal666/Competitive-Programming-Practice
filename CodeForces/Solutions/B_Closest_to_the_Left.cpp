#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int t=1;t<=k;t++){
        int temp;
        cin>>temp;
        int start = 0;
        int end = n-1;
        int ans = 0;
        int mid = start+(end-start)/2;
        while(start<=end){
            if(arr[mid]>temp){
                end = mid-1;
            }
            else{
                start = mid+1;
                ans = mid+1;
            }
            mid = start+(end-start)/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}