#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, p;
    cin >> n >> p;

    map<long long, long long> mp;

    // Prime factorization
    for (long long i = 2; i * i <= p; i++)
    {
        while (p % i == 0)
        {
            mp[i]++;
            p /= i;
        }
    }
    if (p > 1)
        mp[p]++;

    long long ans = 1;

    for (auto &it : mp)
    {
        long long prime = it.first;
        long long exp = it.second;
        long long power = exp / n;

        for (int i = 0; i < power; i++)
        {
            ans *= prime;
        }
    }

    cout << ans << "\n";
    return 0;
}
