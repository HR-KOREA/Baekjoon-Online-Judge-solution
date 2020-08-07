#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int sum = 0;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << "\n";
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        sum += i;
        int count = 0;
        int num = i;
        while (1)
        {
            sum += num % 10;
            num = num / 10;
            if (num < 10)
            {
                sum += num;
                break;
            }
        }
        if (sum == n)
        {
            cout << i << "\n";
            break;
        }
        else if (i == n - 1)
            cout << 0 << "\n";
        sum = 0;
    }
    return 0;
}