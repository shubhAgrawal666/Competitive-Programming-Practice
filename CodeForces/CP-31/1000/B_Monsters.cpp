#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<pair<int, int>> arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i].first;
			arr[i].first = (arr[i].first) % k == 0 ? k : (arr[i].first) % k;
			arr[i].second = i + 1;
		}
		sort(arr.begin(), arr.end(),
				 [](pair<int, int> &a, pair<int, int> &b)
				 {
					 if (a.first == b.first)
					 {
						 return a.second < b.second;
					 }
					 return a.first > b.first;
				 });
		for (int i = 0; i < arr.size(); i++)
		{
			cout << arr[i].second << " ";
		}
		cout << endl;
	}
	return 0;
}