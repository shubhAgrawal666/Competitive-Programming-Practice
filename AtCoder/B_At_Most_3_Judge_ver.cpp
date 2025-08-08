#include<bits/stdc++.h>
using namespace std;
bool isPresent[3000001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,W;
    cin>>N>>W;
    vector<int> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<3000001;i++){
        isPresent[i] = false;
    }
    for(int i=0;i<N;i++){
        isPresent[arr[i]] = true;
    }
    if(N>=2){
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                isPresent[arr[i]+arr[j]] = true;
            }
        }
    }
    if(N>=3){
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                for(int k=j+1;k<N;k++){
                    isPresent[arr[i]+arr[j]+arr[k]] = true;
                }
            }
        }
    }
    int ans = 0;
    for(int i=1;i<=W;i++){
        if(isPresent[i]==true){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}