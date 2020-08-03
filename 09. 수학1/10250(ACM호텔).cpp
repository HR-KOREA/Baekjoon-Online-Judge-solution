#include <string>
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    int h = 0;
    int w = 0;
    int n = 0;
    int room = 0;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        cin >> h >> w >> n;
        if (n % h != 0)
        {
            room = (n % h) * 100 + (n / h) + 1;
        }
        else
            room = h * 100 + (n / h);
        cout << room << "\n";
    }
    return 0;
}