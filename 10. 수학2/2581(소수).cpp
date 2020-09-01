#include <string>
#include <iostream>
using namespace std;

int main()
{
    int m,n = 0;
    int num[10001] = { 0 };
    int count = 0;
    bool check = false;
    int min = 0;
    int sum = 0;
    
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (i == 1)
            count++;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            num[i] = i;
            check = true;
        }
        count = 0;
    }
    if (check == false)
    {
        cout << -1 << "\n";
        return 0;
    }
    check = false;
    for (int i = m; i <= n; i++)
    {
        if (num[i] != 0 && check == false)
        {
            min = num[i];
            check = true;
        }
        sum += num[i];
    }
    cout << sum << "\n" << min << "\n";

    return 0;
}