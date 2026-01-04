#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(ll, name, size) vector<ll> name(size);
#define vec2(ll, name, size1, size2) vector<vector<ll>> name(size1, vector<ll>(size2));
#define fori(i, n, vec)      \
  for (ll i = 0; i < n; i++) \
    cin >> vec[i];
ll N = 100003;
vector<ll> primes(N);
vector<ll> sieve(ll n)
{
  vector<bool> isPrime(n + 1, true);
  vector<ll> prime;
  isPrime[0] = isPrime[1] = false;
  for (ll i = 2; i <= n; i++)
  {
    if (isPrime[i])
    {
      prime.push_back(i);
      for (ll j = i * i; j <= n; j += i)
      {
        isPrime[j] = false;
      }
    }
  }
  return prime;
}
void solve()
{
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> arr(n, vector<ll>(m));
  for (ll i = 0; i < n; i++)
  {
    for (ll j = 0; j < m; j++)
    {
      cin >> arr[i][j];
      arr[i][j] = *(lower_bound(primes.begin(), primes.end(), arr[i][j])) - arr[i][j];
    }
  }
  ll ans = LONG_LONG_MAX;
  for (ll i = 0; i < n; i++)
  {
    ll sum = 0;
    for (ll j = 0; j < m; j++)
    {
      sum += arr[i][j];
    }
    ans = min(ans, sum);
  }
  for (ll i = 0; i < m; i++)
  {
    ll sum = 0;
    for (ll j = 0; j < n; j++)
    {
      sum += arr[j][i];
    }
    ans = min(ans, sum);
  }
  cout << ans << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  primes = sieve(N);
  ll t;
  t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}