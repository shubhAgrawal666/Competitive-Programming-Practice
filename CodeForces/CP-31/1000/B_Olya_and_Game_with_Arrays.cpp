#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<vector<long long int>> arr(n);
        for(long long int i=0;i<n;i++){
            long long int m;
            cin>>m;
            for(long long int j=0;j<m;j++){
                long long int data;
                cin>>data;
                arr[i].push_back(data);
            }
            sort(arr[i].begin(),arr[i].end());
        }
        long long int minx = INT_MAX;
        long long int mini = INT_MAX;
        long long int ind = INT_MAX;
        for(long long int i=0;i<n;i++){
            minx = min(minx,arr[i][0]);
            if(mini>arr[i][1]){
                mini = arr[i][1];
                ind = i;
            }
        }
        long long int sum = 0;
        for(long long int i=0;i<n;i++){
            if(ind!=i){
                sum+=arr[i][1];
            }
            else{
                sum+=minx;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}