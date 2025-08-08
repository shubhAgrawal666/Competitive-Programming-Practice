#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin>>t;
    while(t--){
        long long int n, p;
        cin >> n >> p;
        vector<long long int> a(n);
        for(long long int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long int> b(n);
        for(long long int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<pair<long long int, long long int>> v;
        for(long long int i = 0; i < n; i++) {
            v.push_back({b[i], a[i]});
        }
        sort(v.begin(), v.end());
        long long int mcost = p;
        long long int per = 1;
        for(auto it : v){
            if(it.first<p){
                if(per+it.second>=n){
                    mcost +=(n-per)*(it.first);
                    per = n;
                    break;
                }
                else{
                    mcost += it.second * it.first;
                    per += it.second;
                }
            }
            else{
                break;
            }
        }
        mcost += (n-per)*p;
        cout << mcost << endl;
    }
    return 0;
}