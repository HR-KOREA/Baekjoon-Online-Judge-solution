#include <iostream>
#include <cmath>
using namespace std;

int Fibonacci(int n)
{
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n = 0;
    cin >> n;
    cout << Fibonacci(n + 1) << "\n";

    return 0;
}