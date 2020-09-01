#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int* height;
    int* Weight;
    int rank = 0;
    cin >> n;
    height = new int[n + 1];
    Weight = new int[n + 1];

    for (int i = 0; i < n; i++)
        cin >> height[i] >> Weight[i];
    for (int i = 0; i < n; i++)
    {
        rank = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            else if (height[i] < height[j] && Weight[i] < Weight[j])
            {
                rank++;
            }
        }
        cout << rank + 1 << " ";
    }
    cout << "\n";
    return 0;
}