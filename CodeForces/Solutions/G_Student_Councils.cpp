#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector<long long int> arr,long long int mid,long long int k){
    long long int sum = 0;
    for(long long int i=0;i<arr.size();i++){
        sum+=min(mid,arr[i]);
    }
    return sum/k>=mid;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int k,n;
    cin>>k>>n;
    vector<long long int> arr(n);
    long long int sum = 0;
    for (long long int i = 0; i < n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    long long int low = 0;
    long long int high = sum/k;
    long long int mid = low +(high-low)/2;
    long long int ans = 0;
    while(low<=high){
        if(isPossible(arr,mid,k)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
        mid = low +(high-low)/2;
    }
    cout<<ans;
    return 0;
}