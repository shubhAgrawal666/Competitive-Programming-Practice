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
        string s;
        cin >> n >> s;
        map<char, int> freq1;
        map<char, int> freq2;
        for(auto c :s){
            freq1[c]++;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            freq2[s[i]]++;
            freq1[s[i]]--;
            if(freq1[s[i]]==0){
                freq1.erase(s[i]);
            }
            ans = max(ans, (int)freq2.size() + (int)freq1.size());
        }
        cout << ans << endl;
    }
    return 0;
}