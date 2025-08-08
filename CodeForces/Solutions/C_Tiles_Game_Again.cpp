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
        int max = INT_MIN;
        int spaces = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0){
                spaces++;
            }
            else{
                spaces = 0;
            }
        }
        cout<<max<<endl;
    }
    return 0;
}