#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int> arr(n);
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<pair<long long int,long long int>> p;
        for(long long int i=0;i<n;i++){
            p.push_back({arr[i],i});
        }
        sort(p.begin(),p.end());
        sort(arr.begin(),arr.end());
        long long int head = 0;
        long long int diff = 1;
        long long int ans = 0;
        vector<long long int> points(n);
        bool first = true;
        for(auto it = p.rbegin(); it != p.rend(); it++){
            if(first){
                points[it->second] = head+diff;
                ans+=2*it->first*(points[it->second]);
                first = false;
            }
            else{
                points[it->second] = head-diff;
                first = true;
                ans+=2*it->first*abs(points[it->second]);
                diff++;
            }
        }
        cout<<ans<<endl;
        cout<<head<<" ";
        for(auto it:points){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}