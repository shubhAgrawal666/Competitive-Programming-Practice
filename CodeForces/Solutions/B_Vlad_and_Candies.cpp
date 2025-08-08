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
        if(n<2){
            int x;
            cin>>x;
            if(x==1){
                cout<<"YES"<<endl;
                continue;
            }
            cout<<"NO"<<endl;
            continue;
        }
        else{
            vector<int> arr(n);
            int max1 = INT_MIN;
            int max2 = INT_MIN;
            for(int i=0;i<n;i++){
                cin>>arr[i];
                if(arr[i]>=max1){
                    max2 = max1;
                    max1 = arr[i];
                }
                else if(arr[i]>=max2){
                    max2 = arr[i];
                }
            }
            if(max1-max2<=1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}