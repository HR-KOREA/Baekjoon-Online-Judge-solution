#include <string>
#include <iostream>

using namespace std;
int main()
{
    int n[4] = { 0 };
    int max = 0;
    int check = 0;
    int sum = 0;

    while (1)
    {
        for (int i = 0; i < 3; i++)
            cin >> n[i];
        if (n[0] == 0 && n[1] == 0 && n[2] == 0)
            break;
        for (int i = 0; i < 3; i++)
            if (n[i] > max)
            {
                max = n[i];
                check = i;
            }
        for (int i = 0; i < 3; i++)
        {
            if (i != check)
            {
                sum += n[i] * n[i];
            }
        }
        if (sum == max * max)
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";
        check = 0;
        sum = 0;
        max = 0;
    }
    return 0;
}