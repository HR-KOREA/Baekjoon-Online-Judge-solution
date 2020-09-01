#include <iostream>
using namespace std;

void hanoi(int n, int start, int mid, int end)
{
    if (n == 1)
        cout << start << " " << end << "\n";
    else
    {
        hanoi(n - 1, start, end, mid);
        cout << start << " " << end << "\n";
        hanoi(n - 1, mid, start, end);
    }
}
int count(int n)
{
    int sum = 1;
    for (int i = 0; i < n; i++)
        sum *= 2;
    return sum;
}
int main()
{
    int n = 0;
    cin >> n;
    cout << count(n) - 1 << "\n";
    hanoi(n, 1, 2, 3);

    return 0;
}