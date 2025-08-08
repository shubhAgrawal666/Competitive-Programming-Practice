#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int T=1;T<=t;T++){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for (int i = 0; i < n; i++){
            cin>>arr[i];
        }
        int even = 0;
        int odd = 0;
        for(int i=0;i<n;i++){
            if(i%2==0&&(i%2!=arr[i]%2)){
                even++;
            }
            else if(i%2==1&&(i%2!=arr[i]%2)){
                odd++;
            }
        }
        if(even==odd){
            cout<<even<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}