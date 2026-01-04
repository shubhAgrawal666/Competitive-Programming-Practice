#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const unsigned long long CAP = (unsigned long long)2e18; // cap for counts

// safe addition with cap
unsigned long long addcap(unsigned long long a, unsigned long long b)
{
  if (a >= CAP - b)
    return CAP;
  return a + b;
}
// safe multiplication with cap (small arguments used only)
unsigned long long mulcap(unsigned long long a, unsigned long long b)
{
  if (a == 0 || b == 0)
    return 0;
  if (a > CAP / b)
    return CAP;
  return a * b;
}

// compute nCk with capping; k should be <= n and values smallish (we cap anyway)
unsigned long long nCk_cap(unsigned long long n, unsigned long long k)
{
  if (k > n)
    return 0;
  if (k == 0 || k == n)
    return 1;
  if (k > n - k)
    k = n - k;
  __int128 res = 1;
  for (unsigned long long i = 1; i <= k; ++i)
  {
    res = res * (__int128)(n - k + i);
    res = res / (__int128)i;
    if (res > CAP)
      return CAP;
  }
  return (unsigned long long)min((__int128)CAP, res);
}

// count(r, s): number of sequences of length r (digits 0..9, leading zeros allowed) summing to s
unsigned long long count_rs(int r, int s)
{
  if (s < 0)
    return 0;
  if (r == 0)
    return (s == 0) ? 1 : 0;
  if (s > 9 * r)
    return 0;
  unsigned long long ans = 0;
  int maxj = s / 10;
  for (int j = 0; j <= maxj; ++j)
  {
    // term = (-1)^j * C(r, j) * C(s - 10*j + r - 1, r - 1)
    unsigned long long c1 = nCk_cap(r, j);
    int rem = s - 10 * j;
    if (rem < 0)
      break;
    unsigned long long c2 = nCk_cap((unsigned long long)rem + (r - 1), (unsigned long long)(r - 1));
    unsigned long long term = mulcap(c1, c2);
    if (j % 2 == 0)
      ans = addcap(ans, term);
    else
    {
      // subtraction with cap: do safe subtract
      if (term >= ans)
        ans = 0;
      else
        ans -= term;
    }
    if (ans >= CAP)
      return CAP;
  }
  return ans;
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  unsigned long long k;
  if (!(cin >> k))
    return 0;
  const int S = 10;

  // find minimal L such that total numbers with digits-sum S and length <= L >= k
  unsigned long long cumulative = 0;
  int L = 1;
  while (true)
  {
    unsigned long long total_len = 0;
    // exact(L) = count(L,S) - count(L-1,S)
    unsigned long long cL = count_rs(L, S);
    unsigned long long cLm1 = count_rs(L - 1, S);
    if (cL >= cLm1)
      total_len = (cL - cLm1);
    else
      total_len = 0; // shouldn't happen but safe
    cumulative = addcap(cumulative, total_len);
    if (cumulative >= k)
      break;
    ++L;
    // safe guard (but L won't get huge for S=10)
    if (L > 2000)
      break;
  }

  // adjust k to be relative to numbers of length exactly L
  // compute how many numbers of length < L exist and subtract
  unsigned long long less_count = 0;
  for (int len = 1; len < L; ++len)
  {
    unsigned long long cL = count_rs(len, S);
    unsigned long long cLm1 = count_rs(len - 1, S);
    unsigned long long exact = (cL >= cLm1) ? (cL - cLm1) : 0;
    less_count = addcap(less_count, exact);
  }
  if (k > less_count)
    k -= less_count;
  else
    k = 1; // safety

  // now construct the L-digit number
  string ans;
  int remaining_sum = S;
  for (int pos = 1; pos <= L; ++pos)
  {
    int start = (pos == 1) ? 1 : 0;
    bool placed = false;
    for (int d = start; d <= 9; ++d)
    {
      int rem_s = remaining_sum - d;
      int rem_len = L - pos;
      unsigned long long cnt = count_rs(rem_len, rem_s);
      if (cnt >= k)
      {
        ans.push_back(char('0' + d));
        remaining_sum -= d;
        placed = true;
        break;
      }
      else
      {
        k -= cnt;
      }
    }
    if (!placed)
    {
      // Should not happen if logic correct; fallback to put 0
      ans.push_back('0');
    }
  }

  cout << ans << '\n';
  return 0;
}
