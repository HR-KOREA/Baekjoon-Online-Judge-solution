#include <iostream>
using namespace std;

int n = 0;
long long dp[91];

long long fibo(int num)
{
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[num];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	cout << fibo(n);

	return 0;
}