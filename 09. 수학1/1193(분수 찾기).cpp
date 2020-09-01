#include <string>
#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int y = 1;
    int n = 0;
    int sum = 0;
    int line = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        line++;
        if (sum >= n)
        {
            sum = sum - i;
            break;
        }
    }
    if (line % 2 == 0)
        y = line;
    else
        x = line;
    if (x == 1)
    {
        for (int i = 1; i < n - sum; i++)
        {
            x++;
            y--;
        }
    }
    else if (y == 1)
    {
        for (int i = 1; i < n - sum; i++)
        {
            x--;
            y++;
        }
    }
    cout << x << "/" << y << "\n";

    return 0;
}