#include <string>
#include <iostream>
#include <cmath>

using namespace std;
long long sosu[246913] = { 0 };

long long* calc()
{
    for (int i = 2; i < sqrt(246912); i++)
    {
        if (sosu[i] == 0)
        {
            for (int j = i+1; j <= 246912; j++)
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
    int n = 0;
    int count = 0;
    calc();
    while (1)
    {
        cin >> n;
        if (n == 0)//0들어오면 종료
            return 0;
        else if (n == 1)
            cout << 1 << "\n";
        else
        {
            for (int i = n+1; i <= 2 * n; i++)
            {
                if (sosu[i] == 0)
                    count++;
            }
            cout << count << "\n";
            count = 0;
        }
    }
    return 0;
}