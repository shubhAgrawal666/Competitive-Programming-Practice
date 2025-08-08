#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> a(n);
        for(long long int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long int> b(n);
        for(long long int i=0;i<n;i++){
            cin>>b[i];
        }
        long long int sum = 0;
        for(long long int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])+abs(b[i]-b[i+1])>abs(b[i]-a[i+1])+abs(a[i]-b[i+1])){
                sum+=abs(b[i]-a[i+1])+abs(a[i]-b[i+1]);
            }
            else{
                sum+=abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}