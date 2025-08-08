#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll ans = LLONG_MAX;

        for (ll i = 0; i <= 40; i++)
        {
            ll temp_b = b + i;
            if (temp_b == 1)
                continue;
            ll ops = i;
            ll x = a;
            while (x > 0)
            {
                x /= temp_b;
                ops++;
            }
            ans = min(ans, ops);
        }
        cout << ans << endl;
    }

    return 0;
}
