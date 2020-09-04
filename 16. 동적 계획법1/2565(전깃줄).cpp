#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n = 0;
vector<pair<int, int>> electric;
vector<int> dp;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	int temp1 = 0;
	int temp2 = 0;
	int max_value = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> temp1 >> temp2;
		electric.push_back(make_pair(temp1, temp2));
	}
	sort(electric.begin(), electric.end());//오름차순정렬
	for (int i = 0; i < n; i++)
	{
		dp.push_back(1);
		for (int j = 0; j < i; j++)
		{
			if (electric[i].first > electric[j].first
				&& electric[i].second > electric[j].second)
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		max_value = max(dp[i], max_value);
	}
	cout << n - max_value << "\n";
	return 0;
}