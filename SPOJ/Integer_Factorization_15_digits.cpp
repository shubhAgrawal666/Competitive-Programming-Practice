#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 1; i <= 10; i++)
    {
        long long int n;
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        else if (n != 0)
        {
            for (long long int i = 2; i <= sqrt(n); i++)
            {
                int count = 0;
                if (n % i == 0)
                {
                    while (n % i == 0)
                    {
                        count++;
                        n = n / i;
                    }
                    cout << i << '^' << count << " ";
                }
            }
            if (n > 1)
            {
                cout << n << '^' << 1 << endl;
            }
        }
    }
    return 0;
}