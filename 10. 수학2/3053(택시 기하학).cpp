#include <iostream>
#include <cmath>

double pi = acos(-1.0);
using namespace std;

int main()
{
    double r = 0;

    cin >> r;
    cout << fixed;
    cout.precision(6);
    cout << r * r * pi << "\n";
    cout << fixed;
    cout.precision(6);
    cout << (2 * r * 2 * r) / 2 << "\n";

    return 0;
}