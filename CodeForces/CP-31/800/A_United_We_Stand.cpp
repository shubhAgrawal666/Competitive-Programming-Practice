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
        int maxi = INT_MIN;
        int c = 0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            maxi = max(maxi,arr[i]);
        }
        for(int i = 0;i<n;i++){
            if(maxi==arr[i]){
                c++;
            }
        }
        if(c==n){
            cout<<-1<<endl;
        }
        else{
            cout<<n-c<<" "<<c<<endl;
            for(int i = 0;i<n;i++){
                if(arr[i]!=maxi){
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;
            for(int i = 0;i<c;i++){
                cout<<maxi<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}