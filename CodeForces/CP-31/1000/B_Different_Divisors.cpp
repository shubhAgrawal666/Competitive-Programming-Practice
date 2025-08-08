#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long int n)
{
    for (long long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int t;
    cin >> t;
    vector<long long int> prime;
    for (long long int i = 2; i <= 100000; i++)
    {
        if (isPrime(i))
        {
            prime.push_back(i);
        }
    }
    while (t--)
    {
        long long int d;
        cin >> d;
        long long int p = *lower_bound(prime.begin(),prime.end(),d+1);
        long long int q = *lower_bound(prime.begin(),prime.end(),p+d);
        cout << (long long int)min((long long int)p * p * p, (long long int)p * q) << '\n';
    }
    return 0;
}