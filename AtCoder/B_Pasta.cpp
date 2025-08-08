#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    vector<int> vec(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>vec[i];
    }
    for(int i=0;i<m;i++){
        bool wasFound = false;
        for(int j=0;j<n;j++){
            if(arr[j]==vec[i]){
                wasFound = true;
                arr[j] = 0;
                break;
            }
        }
        if(wasFound==false){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}