#include <iostream>
using namespace std;

char starmap[2188][2188];
void star(int n, int x, int y)
{
    if (n == 1)
        starmap[x][y] = '*';
    else
    {
        int division = n / 3;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == 1 && j == 1)
                    continue;
                else
                    star(division, x + (division * i), y + (division * j));
            }
        }
    }
}
int main()
{
    int n = 0;
    cin >> n;
    fill(starmap[0], starmap[0] + 2188 * 2188, ' ');

    star(n, 0, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << starmap[i][j];
        }
        cout << "\n";
    }
    return 0;
}