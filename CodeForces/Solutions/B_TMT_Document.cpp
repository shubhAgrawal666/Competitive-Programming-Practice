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
        string s;
        cin >> s;
        int tcount = 0, mcount = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                tcount++;
            }
            else
            {
                mcount++;
            }
        }
        if (2 * mcount == tcount)
        {
            if (s[0] == 'M' || s[n - 1] == 'M')
            {
                cout << "NO" << endl;
            }
            else
            {
                int T1[mcount];
                int M[mcount];
                int T2[mcount];
                int idx1 = 0;
                int idx2 = 0;
                int idx3 = 0;
                for(int i=0;i<n;i++){
                    if(s[i]=='T'&&idx1<mcount){
                        T1[idx1++] = i;
                    }
                    else if(s[i]=='T'&&idx1>=mcount){
                        T2[idx3++] = i;
                    }
                    else{
                        M[idx2++] = i;
                    }
                }
                bool isValid = true;
                for(int i=0;i<mcount;i++){
                    if(T1[i]>=M[i]||M[i]>=T2[i]){
                        isValid = false;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
                if(isValid){
                    cout<<"YES"<<endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}