#include <iostream>
#include <string>
using namespace std;

long long dp[1000001] = { 0,1 };

long long dpdp(int num)
{
	for (int i = 2; i <= num; i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 15746;
	return dp[num];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n = 0;
	cin >> n;
	cout << dpdp(n+1) << "\n";
	
	return 0;
}