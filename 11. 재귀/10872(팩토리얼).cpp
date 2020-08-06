#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n)
{
    if (n == 1)
        return n;
    else
        return n * factorial(n - 1);
}
int main()
{
    int n = 0;

    cin >> n;
    if (n == 0)
        cout << 1 << "\n";
    else
        cout << factorial(n) << "\n";

    return 0;
}