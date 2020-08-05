#include <string>
#include <iostream>

using namespace std;
int main()
{
    int x[5] = { 0 };
    int y[5] = { 0 };

    for (int i = 0; i < 3; i++)
        cin >> x[i] >> y[i];
    if (x[0] == x[1])
        x[4] = x[2];
    else if (x[0] == x[2])
        x[4] = x[1];
    else if (x[1] == x[2])
        x[4] = x[0];
    if (y[0] == y[1])
        y[4] = y[2];
    else if (y[0] == y[2])
        y[4] = y[1];
    else if (y[1] == y[2])
        y[4] = y[0];

    cout << x[4] << " " << y[4] << "\n";
    return 0;
}