#include <string>
#include <iostream>
using namespace std;

int main()
{
    int m, n = 0;
    int* num;
    cin >> m >> n;
    num = new int[n+1];

    for (int i = 0; i < n; i++)
        num[i] = 0;
    for (int i = m; i <= n; i++)
        num[i] = i;
    num[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = i*2; j <= n; j+=i)
        {
            if (num[j] % i == 0)
                num[j] = 0;
        }
    }
    for (int i = m; i <= n; i++)
    {
        if (num[i] != 0)
            cout << num[i] << "\n";
    }
    delete[] num;

    return 0;
}