#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    int start = 0;
    while(start+1<n){
        if(abs(arr[start]-arr[start+1])==1){
            ans.push_back(arr[start]);
            start+=1;
        }
        else{
            if(arr[start]<arr[start+1]){
                ans.push_back(arr[start]);
                for(int i = arr[start]+1;i<=arr[start+1]-1;i++){
                    ans.push_back(i);
                }
                start+=1;
            }
            else{
                ans.push_back(arr[start]);
                for(int i = arr[start]-1;i>=arr[start+1]+1;i--){
                    ans.push_back(i);
                }
                start+=1;
            }
        }
    }
    ans.push_back(arr[start]);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}