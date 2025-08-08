#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
bool check(vector<pair<int,int>> vec,int r,int c){
    for(auto it:vec){
        if(it.first!=r&&it.second!=c){
            return false;
        }
    }
    return true;
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    int maxi = INT_MIN;
    vector<int> row;
    vector<int> col;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            maxi = max(maxi,arr[i][j]);
        }
    }
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==maxi){
                vec.push_back({i,j});
            }
        }
    }
    if(vec.size()==1){
        cout<<maxi-1<<endl;
        return;
    }
    if(vec[0].first==vec[1].first){
        int r = vec[0].first;
        int c = -1;
        bool flag = true;
        for(int i=0;i<vec.size();i++){
            if(vec[i].first!=r){
                if(c==-1){
                    c = vec[i].second;
                    continue;
                }
                else if(vec[i].second!=c){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<maxi-1<<endl;
            return;
        }
    }
    else if(vec[0].second==vec[1].second){
        int c = vec[0].second;
        int r = -1;
        bool flag = true;
        for(int i=0;i<vec.size();i++){
            if(vec[i].second!=c){
                if(r==-1){
                    r = vec[i].first;
                    continue;
                }
                else if(vec[i].first!=r){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<maxi-1<<endl;
            return;
        }
    }
    else if(check(vec,vec[0].first,vec[1].second)||check(vec,vec[1].first,vec[0].second)){
        cout<<maxi-1<<endl;
        return;
    }
    cout<<maxi<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}