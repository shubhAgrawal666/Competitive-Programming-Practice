#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
vector<ll> sieve(int n)
{
  vector<bool> isPrime(n + 1, true);
  vector<ll> prime;
  isPrime[0] = isPrime[1] = false;
  for (ll i = 2; i * i <= n; i++)
  {
    if (isPrime[i])
    {
      prime.push_back(i);
      for (ll j = i * i; j <= n; j += 1)
      {
        isPrime[j] = false;
      }
    }
  }
  return prime;
}
vector<pair<int, int>> primeFactorisation(int x, vector<int> &spf)
{
  vector<pair<int, int>> ans;
  while (x != 1)
  {
    int cnt = 0;
    int temp = spf[x];
    while (x % temp == 0)
    {
      cnt++;
      x /= temp;
    }
    ans.push_back({temp, cnt});
  }
  return ans;
}
vector<int> smallprime(ll n)
{
  int maxN = n;
  vector<bool> isPrime(maxN, true);
  vector<int> spf(n, 1e9);
  for (ll i = 2; i < maxN; i++)
  {
    if (isPrime[i])
    {
      spf[i] = i;
      for (ll j = i * i; j < maxN; j += i)
      {
        isPrime[j] = false;
        spf[j] = min(spf[j], (int)i);
      }
    }
  }
  return spf;
}
void solve()
{
  int n;
  cin >> n;
  int cnt = 0;
  vector<int> spf = smallprime(n + 1);
  for (int i = 1; i <= n; i++)
  {
    vector<pair<int, int>> temp = primeFactorisation(i, spf);
    if (temp.size() == 2)
    {
      cnt++;
    }
  }
  cout << cnt << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}