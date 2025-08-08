#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i,n,vec) for(int i = 0; i < n; i++) cin >> vec[i];
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int x = 0;
    while (mp.count(x)) x++;

    if (mp.count(x + 1)) {
        int l = 0, r = n - 1;
        while (arr[l] != (x + 1)) l++;
        while (arr[r] != (x + 1)) r--;

        map<int, int> temp = mp;
        for (int i = l; i <= r; i++) {
            temp[arr[i]]--;
            if (temp[arr[i]] == 0) temp.erase(arr[i]);
        }
        temp[x] += (r - l + 1);

        int y = 0;
        while (temp.count(y)) y++;
        if (y == x + 1) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        for (auto it : mp) {
            if ((it.first<x&&it.second >= 2)||(it.first>x&&it.second>=1)) {
                cout << "Yes" << endl;
                return;
            }
        }
        cout << "No" << endl;
    }
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