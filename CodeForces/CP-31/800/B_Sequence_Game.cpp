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
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            if(i==arr.size()-1){
                ans.push_back(arr[i]);
            }
            else{
                if(arr[i]>arr[i+1]){
                    ans.push_back(arr[i]);
                    ans.push_back(1);
                }
                else{
                    ans.push_back(arr[i]);
                }
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}