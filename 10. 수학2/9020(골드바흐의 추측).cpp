#include <string>
#include <iostream>
#include <cmath>

using namespace std;
long long sosu[10001] = { 0 };

long long* calc()
{
    for (int i = 2; i < sqrt(10001); i++)
    {
        if (sosu[i] == 0)
        {
            for (int j = i + 1; j <= 10001; j++)
            {
                if (j % i == 0)
                    sosu[j] = 1;
            }
        }
    }
    return sosu;
}
int main()
{
    int t = 0;
    int x = 0, y = 0;
    int even = 0;
    bool check = false;
    calc();
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> even;
        for (int j = even / 2; j > 1; j--)
        {
            for (int k = even / 2; k <= even - j; k++)
            {
                if (sosu[j] == 0 && sosu[k] == 0)
                {
                    if (even == j + k)
                    {
                        x = j;
                        y = k;
                        check = true;
                        break;
                    }
                }
            }
            if (check == true)
                break;
        }
        cout << x << " " << y << "\n";
        check = false;
    }
    return 0;
}