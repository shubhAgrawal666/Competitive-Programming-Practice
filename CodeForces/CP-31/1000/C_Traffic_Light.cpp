#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
        vector<int> v;
        for(int i = 0; i < n; i++){
            if(s[i] == 'g'){
                v.push_back(i);
            }
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(s[i]==c){
                auto it = upper_bound(v.begin(), v.end(), i);
                if(it != v.end()){
                    ans = max(ans, *it - i);
                }
                else{
                    ans = max(ans, (n - i + v[0])%n);
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}