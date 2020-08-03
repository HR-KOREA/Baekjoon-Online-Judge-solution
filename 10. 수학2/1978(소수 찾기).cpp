#include <string>
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int num[101] = { 0 };
    int count = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    for (int i = 0; i < n; i++)
    {
        if (num[i] == 1)
            count++;
        for (int j = 2; j < num[i]; j++)
        {
            if (num[i] % j == 0)
            {
                count++;
                break;
            }
        }
    }
    cout << n - count << "\n";

    return 0;
}