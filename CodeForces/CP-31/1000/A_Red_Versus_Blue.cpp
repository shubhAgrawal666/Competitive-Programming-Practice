#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)         \
    for (int i = 0; i < n; i++) \
        cin >> vec[i];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        string s;
        int rcnt = r/(b+1);
        int remr = r%(b+1);
        for(int i=1;i<=b+1;i++){
            for(int j = 0;j<rcnt;j++){
                s+='R';
            }
            if(remr>0){
                    s+='R';
                    remr--;
            }
            if(i!=b+1){
                s+='B';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}