#include <string>
#include <iostream>
using namespace std;

int find_x(int five_kilo, int x, int n)
{
    while (1)
    {
        if (n - 5 < five_kilo * x)
            break;
        x++;
    }
    return x;
}
int main()
{
    int five_kilo = 5;
    int x = 0;
    int three_kilo = 3;
    int y = 0;
    int n = 0;
    int n_ex = 0;

    cin >> n;
    n_ex = n;
    if (n == 4 || n == 7)
    {
        cout << -1 << "\n";
        return 0;
    }
    else if (n >= five_kilo)
    {
        x = find_x(five_kilo, x, n_ex);
        while ((n - (five_kilo * x)) % 3 != 0)
            x--;
        y = (n - (five_kilo * x)) / three_kilo;
    }
    else
    {
        if ((n - (three_kilo * y)) % 3 != 0)
        {
            cout << -1 << "\n";
            return 0;
        }
        else
            y = n / three_kilo;
    }
    cout << x + y << "\n";
    return 0;
}