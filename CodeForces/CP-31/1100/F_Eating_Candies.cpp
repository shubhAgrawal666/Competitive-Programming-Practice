#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long left = 0, right = n - 1;
        int lefts = arr[left],rights = arr[right];
        long long int ans = 0;
        while(left<right){
            if(lefts==rights){
                ans = max(ans,left + 1 + n-right);
                left++;
                right--;
                lefts+=arr[left];
                rights+=arr[right];
            }
            else if(lefts<rights){
                left++;
                lefts+=arr[left];
            }
            else{
                right--;
                rights+=arr[right];
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
