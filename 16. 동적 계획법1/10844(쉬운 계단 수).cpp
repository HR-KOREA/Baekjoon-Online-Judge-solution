#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n = 0;
long long dp[101][10];//i자리수에서 숫자j가 나올 수 있는 경우의 수
long long sum = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;

	dp[1][0] = 0;
	for (int i = 1; i < 10; i++)
		dp[1][i] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)//0이 나올라면 앞자리수가 무조건 1
				dp[i][j] = dp[i - 1][1] % 1000000000;
			else if (j == 9)//9가 나올라면 앞자리수가 무조건 8
				dp[i][j] = dp[i - 1][8] % 1000000000;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
		}
	}
	for (int i = 0; i < 10; i++)
		sum += dp[n][i];
	cout << sum % 1000000000 << "\n";

	return 0;
}