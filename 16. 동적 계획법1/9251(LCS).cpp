#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string str1;
string str2;
int dp[1002][1002];
int i, j;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> str1 >> str2;
    for (i = 1; i <= str1.size(); i++)
    {
        for (j = 1; j <= str2.size(); j++)
        {
            if (str1[i - 1] == str2[j - 1])      //똑같은 문자면
                dp[i][j] = dp[i - 1][j - 1] + 1; //왼대각보다 +1
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    cout << dp[str1.size()][str2.size()];
    return 0;
}