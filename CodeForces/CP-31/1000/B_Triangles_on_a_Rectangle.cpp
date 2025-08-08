#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int w,h;
        cin>>w>>h;
        long long int ans = LONG_LONG_MIN;
        long long int k1;
        cin>>k1;
        vector<long long int> x1(k1);
        for(long long int i=0;i<k1;i++){
            cin>>x1[i];
        }
        ans = max(ans,(x1[k1-1]-x1[0])*h);
        long long int k2;
        cin>>k2;
        vector<long long int> x2(k2);
        for(long long int i=0;i<k2;i++){
            cin>>x2[i];
        }
        ans = max(ans,(x2[k2-1]-x2[0])*h);
        long long int k3;
        cin>>k3;
        vector<long long int> y1(k3);
        for(long long int i=0;i<k3;i++){
            cin>> y1[i];
        }
        ans = max(ans,(y1[k3-1]-y1[0])*w);
        long long int k4;
        cin>>k4;
        vector<long long int> y2(k4);
        for(long long int i=0;i<k4;i++){
            cin>>y2[i];
        }
        ans = max(ans,(y2[k4-1]-y2[0])*w);
        cout<<ans<<endl;
    }
    return 0;
}