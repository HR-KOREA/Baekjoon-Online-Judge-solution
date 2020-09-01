#include <string>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int x, y, w, h = 0;
    int answer = 0;

    cin >> x >> y >> w >> h;
    if (w - x < x)
        answer = w - x;
    else
        answer = x;
    if (h - y < y && h - y < answer)
        answer = h - y;
    else if (h - y > y && y < answer)
        answer = y;
    cout << answer << "\n";
    return 0;
}