#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n = 0;
int dp[1000001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + 1;//i-1을 1로 만드는 가지수에서 1더하기
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);//1빼서 만드는거랑 비교
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);//1빼서 만드는거랑 비교
	}
	cout << dp[n] << "\n";
	return 0;
}