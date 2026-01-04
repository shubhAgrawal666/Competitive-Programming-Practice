#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 998244353;

// Fast exponentiation (for modular inverse)
ll modpow(ll a, ll e)
{
  ll res = 1;
  while (e)
  {
    if (e & 1)
      res = (res * a) % MOD;
    a = (a * a) % MOD;
    e >>= 1;
  }
  return res;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;
  while (T--)
  {
    int N;
    cin >> N;
    ll total = 1, lose = 1;
    for (int i = 0; i < N; i++)
    {
      int a;
      cin >> a;
      total = (total * (a + 1)) % MOD;
      lose = (lose * (a / 2 + 1)) % MOD;
    }
    ll P = (total - lose + MOD) % MOD;
    ll Q = total;
    ll invQ = modpow(Q, MOD - 2); // Fermat’s inverse
    ll ans = (P * invQ) % MOD;
    cout << ans << "\n";
  }
  return 0;
}
