#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> arr(n,vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            string s;
            cin>>s;
            for(int j=0;j<n;j++){
                arr[i][j] = s[j]-'0';
            }
        }
        int count = 0;
        if (n % 2 == 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j < n / 2; j++)
                {
                    int ones = 0;
                    ones+=arr[i][j];
                    ones+=arr[j][n-i-1];
                    ones+=arr[n-i-1][n-1-j];
                    ones+=arr[n-j-1][i];
                    if(ones==2){
                        count+=2;
                    }
                    else if(ones==1||ones==3){
                        count+=1;
                    }
                }
            }
        }
        else{
            for (int i = 0; i < n / 2; i++)
            {
                for (int j = 0; j <= n / 2; j++)
                {
                    int ones = 0;
                    ones+=arr[i][j];
                    ones+=arr[j][n-i-1];
                    ones+=arr[n-i-1][n-1-j];
                    ones+=arr[n-j-1][i];
                    if(ones==2){
                        count+=2;
                    }
                    else if(ones==1||ones==3){
                        count+=1;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}