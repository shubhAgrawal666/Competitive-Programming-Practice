#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define vec(int, name, size) vector<int> name(size);
#define vec2(int, name, size1, size2) vector<vector<int>> name(size1, vector<int>(size2));
#define fori(i, n, vec)       \
  for (int i = 0; i < n; i++) \
    cin >> vec[i];
void solve()
{

  int N;
  cin >> N;
  vector<int> A(N), B(N);
  vector<int> freq(N);
  for (int i = 0; i < N; ++i)
  {
    cin >> A[i];
    freq[A[i]]++;
  }
  for (int i = 0; i < N; ++i)
  {
    cin >> B[i];
    freq[B[i]]++;
  }
  for (int i = 0; i < N; i++)
  {
    if (freq[i] < 2)
    {
      cout << i << endl;
      return;
    }
  }
  cout << N - 1 << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}
