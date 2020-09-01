#include <iostream>
using namespace std;

int t = 0;
int n = 0;
long long dp[91] = { 0,1 };
int zero_count = 0;
int one_count = 0;

long long fibo(int num)
{
	if (num < 2)
		return num;
	else
	{
		if (dp[num] > 0)
			return dp[num];
		dp[num] = fibo(num - 1) + fibo(num - 2);
		return dp[num];
	}
		
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		if(n==0)
			cout << 1 << " " << 0 << "\n";
		else
			cout << fibo(n-1) << " " << fibo(n) << "\n";
		fill(dp, dp + 91, 0);
	}
	return 0;
}