#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n = 0;
int dp[10001];
int podo[10001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> podo[i];
	dp[1] = podo[1];
	dp[2] = podo[1] + podo[2];
	for (int i = 3; i <= n; i++)
	{
		dp[i] = max(dp[i - 3] + podo[i - 1] + podo[i], dp[i - 2] + podo[i]);
		dp[i] = max(dp[i], dp[i - 1]);//포도주 안마셨을때
	}
	cout << dp[n] << "\n";

	return 0;
}