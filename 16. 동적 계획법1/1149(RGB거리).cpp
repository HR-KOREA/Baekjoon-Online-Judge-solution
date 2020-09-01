#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int Min_value = 1000000000;
int sum = 0;
long long dp[1001][3];//집i를 j색깔로 칠했을때까지의 비용 합
long long house[1001][3];//집i를 j색깔로 칠하는 비용
//빨강, 초록, 파랑
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> house[i][0] >> house[i][1] >> house[i][2];

	for (int i = 1; i <= n; i++)
	{
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + house[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + house[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + house[i][2];
	}
	cout << min(min(dp[n][0], dp[n][1]), dp[n][2]) << "\n";
	return 0;
}