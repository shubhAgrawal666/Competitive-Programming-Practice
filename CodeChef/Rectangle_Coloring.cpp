#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int T;
  cin >> T;

  while (T--)
  {
    long long L, W, R, G, B;
    cin >> L >> W >> R >> G >> B;

    vector<long long> side = {L, L, W, W};
    vector<long long> cap = {R, G, B};

    int ans = INT_MAX;

    for (int m0 = 1; m0 < 8; m0++)
      for (int m1 = 1; m1 < 8; m1++)
        for (int m2 = 1; m2 < 8; m2++)
          for (int m3 = 1; m3 < 8; m3++)
          {
            vector<int> mask = {m0, m1, m2, m3};
            vector<long long> rem = cap;

            bool ok = true;

            // try to paint each side
            for (int i = 0; i < 4 && ok; i++)
            {
              long long need = side[i];
              for (int c = 0; c < 3; c++)
              {
                if (mask[i] & (1 << c))
                {
                  long long take = min(need, rem[c]);
                  rem[c] -= take;
                  need -= take;
                }
              }
              if (need > 0)
                ok = false;
            }

            if (ok)
            {
              int cost = 0;
              for (int i = 0; i < 4; i++)
                cost += __builtin_popcount(mask[i]);
              ans = min(ans, cost);
            }
          }

    cout << ans << "\n";
  }
}
