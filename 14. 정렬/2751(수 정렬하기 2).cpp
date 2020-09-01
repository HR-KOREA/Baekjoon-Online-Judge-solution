#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    int temp = 0;
    cin >> n;
    vector<int> num(n, 0);

    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num.begin(), num.end());
    for (int i = 0; i < n; i++)
        cout << num[i] << "\n";
    return 0;
}