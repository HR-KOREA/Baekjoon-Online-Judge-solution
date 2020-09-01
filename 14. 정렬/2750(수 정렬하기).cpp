#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    int temp = 0;
    int num[1002] = { 0 };

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << num[i] << "\n";
    return 0;
}