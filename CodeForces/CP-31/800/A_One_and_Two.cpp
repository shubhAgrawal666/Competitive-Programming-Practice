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
        int count = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2){
                count++;
            }
        }
        if(count%2!=0){
            cout<<-1<<endl;
        }
        else{
            int ans = 0;
            for(int i=0;i<n;i++){
                if(arr[i]==2){
                    ans++;
                }
                if(ans==count/2){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}