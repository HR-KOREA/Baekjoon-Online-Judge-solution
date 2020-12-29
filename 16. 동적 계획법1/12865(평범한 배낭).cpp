#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> input; //무게, 가치
int dp[101][100001];          //

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n = 0, k = 0; //수, 무게
    int w = 0, v = 0; //무게, 가치
    int sum = 0;
    int answer = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> w >> v;
        input.push_back(make_pair(w, v));
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j - input[i - 1].first >= 0)
                dp[i][j] = max(dp[i - 1][j],
                               input[i - 1].second + dp[i - 1][j - input[i - 1].first]);
        }
    }
    cout << dp[n][k] << "\n";

    return 0;
}