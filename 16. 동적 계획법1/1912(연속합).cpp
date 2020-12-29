#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n = 0;
    long long answer;
    long long num[100001];
    long long dp[100001];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    answer = dp[0] = num[0];
    for (int i = 1; i < n; i++)
    {
        dp[i] = max(dp[i - 1] + num[i], num[i]);
        answer = max(answer, dp[i]);
    }
    cout << answer << "\n";
    return 0;
}