#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int a, b;
    cin >> a >> b;
    for (int c = b;; c--)
    {
        if ((b/c)-((a-1)/c)>=2) 
        {
            cout << c << endl;
            return 0;
        }
    }
    return 0;
}