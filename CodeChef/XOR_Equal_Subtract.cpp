#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int N;
    cin >> N;
    vector<long long> A(N);

    for (int i = 0; i < N; i++)
      cin >> A[i];

    sort(A.begin(), A.end(), [](long long a, long long b)
         { return __builtin_popcountll(a) < __builtin_popcountll(b); });

    long long used = 0;
    int ans = 0;

    for (long long x : A)
    {
      if ((x & used) == used)
      {
        used |= x;
        ans++;
      }
    }

    cout << ans << "\n";
  }
  return 0;
}
