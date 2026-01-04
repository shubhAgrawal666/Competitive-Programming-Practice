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
  int n, q;
  cin >> n >> q;
  deque<int> arr;
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  int k = 0;
  int maxi = *max_element(arr.begin(), arr.end());
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == maxi)
    {
      k = i;
      break;
    }
  }
  vector<pair<int, int>> arr1;
  int temp = k;
  while (k > 0)
  {
    int a1 = arr[0];
    arr.pop_front();
    int b1 = arr[0];
    arr.pop_front();
    arr.push_front(max(a1, b1));
    arr.push_back(min(a1, b1));
    arr1.push_back({a1, b1});
    k--;
  }
  while (q--)
  {
    ll x;
    cin >> x;
    if (x <= temp)
    {
      cout << arr1[x - 1].first << " " << arr1[x - 1].second << endl;
    }
    else
    {
      int idx = (x - temp) % (n - 1);
      if (idx == 0)
        idx = n - 1;
      cout << maxi << " " << arr[idx] << endl;
    }
  }
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