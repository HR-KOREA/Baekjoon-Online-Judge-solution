#include <iostream>
#include <string>
using namespace std;

long long dp[101] = { 0,1,1,1,2,2 };

long long padoban(int num)
{
	for (int i = 5; i <= num; i++)
		dp[i] = dp[i - 1] + dp[i - 5];
	return dp[num];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n = 0;
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << padoban(n) << "\n";
	}
	
	return 0;
}