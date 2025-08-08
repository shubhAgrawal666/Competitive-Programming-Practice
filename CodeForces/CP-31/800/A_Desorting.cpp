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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini = INT_MAX;
        int ind = 0;
        bool isSorted = true;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]>=arr[i]){
                mini = min(mini,((arr[i+1]-arr[i])/2)+1);
            }
            else{
                isSorted = false;
                break;
            }
        }
        if(isSorted){
            cout<<mini<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}