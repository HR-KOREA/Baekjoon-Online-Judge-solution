#include <string>
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    int k = 0;//Ãþ
    int n = 0;//È£

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int apart[15][15] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
        cin >> k >> n;
        for (int j = 1; j <= k; j++)
        {//Ãþ Áõ°¡
            for (int h = 0; h < n; h++)
            {//È£ Áõ°¡
                for (int m = 0; m <= h; m++)
                {
                    apart[j][h] += apart[j - 1][m];
                }
            }
        }
        cout << apart[k][n - 1] << "\n";
    }

    return 0;
}