#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n = 0;
int samgak[501][501];
int dp[501][501];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int max_value = 0;

	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= i; j++)
			cin >> samgak[i][j];
	dp[1][1] = samgak[1][1];
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + samgak[i][j];
			if (dp[i][j] > max_value)
				max_value = dp[i][j];
		}
	}
	cout << max_value << "\n";

	return 0;
}