#include <string>
#include <iostream>
using namespace std;

int main()
{
    int v = 0;
    int a = 0;
    int b = 0;

    cin >> a >> b >> v;
    if ((v - a) % (a - b) == 0)
        cout << (v - a) / (a - b) + 1;
    else
        cout << (v - a) / (a - b) + 2;

    return 0;
}