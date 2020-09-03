#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n = 0;
int num = 0;
int index = 0;
int max_value = 0;
int first_max = 0;
vector<int> a;
vector<int> dp;//dp[i]는 a[i]까지 증가하는 부분수열 개수

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	vector<int> dp1(n,1);
	int k;
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
		for (k = n - 1; k >= i; k--)
		{
			dp1[k] = 1;
			for (int h = n - 1; h > k; h--)
			{
				if (a[k] > a[h])
					dp1[k] = max(dp1[k], dp1[h] + 1);
			}
			max_value = max(max_value, dp[i] + dp1[k]);
		}
	}
	cout << max_value - 1 << "\n";

	return 0;
}