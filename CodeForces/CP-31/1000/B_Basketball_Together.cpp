#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int l = 0;
    int r = n-1;
    int ans = 0;
    while(l<r){
        if(arr[r]>d){
            ans++;
            r--;
        }
        else{
            if(((l + (d/arr[r])+1)<r)&&(d%arr[r]!=0)){
                l = l + (d/arr[r]);
                ans += (d/arr[r]) + 1;
                r--;
            }
            else if((l + (d/arr[r]))<r&&(d%arr[r]==0)){
                l = l + (d/arr[r])-1;
                ans+= d/arr[r];
                r--;
            }
            else{
                break;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}