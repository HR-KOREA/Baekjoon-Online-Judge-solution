#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n = 0;
int num = 0;
int max_value = 0;
vector<int> a;
vector<int> dp;//dp[i]는 a[i]까지 증가하는 부분수열 개수

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		a.push_back(num);
	}	
	dp.push_back(1);
	for (int i = 0; i < n; i++)
	{
		dp.push_back(1);
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		max_value = max(max_value, dp[i]);
	}
	cout << max_value << "\n";

	return 0;
}