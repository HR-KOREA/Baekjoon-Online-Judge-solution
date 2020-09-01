#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n = 0;
int stairs[301];
int dp[301];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int max_value = 0;
	int count = 0;
	int temp = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> stairs[i];
	dp[1] = stairs[1];//첫칸 밟는경우
	dp[2] = max(stairs[1] + stairs[2], stairs[2]);//한칸씩 두번이거나 한번에 두칸점프
	dp[3] = max(stairs[1] + stairs[3], stairs[2] + stairs[3]);
	for (int i = 4; i <= n; i++)
	{
		dp[i] = max(dp[i - 3] + stairs[i - 1] + stairs[i], dp[i - 2] + stairs[i]);
	}//stairs[i-1]경우엔 i-2칸을 밟을수없음
	cout << dp[n] << "\n";

	return 0;
}