#include<bits/stdc++.h>
using namespace std;
long long int count(long long int n, vector<long long int> arr,long long int key){
    long long int s = 0;
    long long int e = n-1;
    long long int mid = (s+e)/2;
    long long int ans = -1;
    while(s<=e){
        if(arr[mid]<=key){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return ans+1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n;
    cin>>n;
    vector<long long int> arr(n);
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        long long int l,r;
        cin>>l>>r;
        long long int ans1 = count(n,arr,l-1);
        long long int ans2 = count(n,arr,r);
        cout<<ans2-ans1<<" ";
    }
    
    return 0;
}