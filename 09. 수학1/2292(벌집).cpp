#include <string>
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int i = 1;
    int answer = 0;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << "\n";
        return 0;
    }
    for (answer = 1; answer < n; answer++)
    {
        i += 6 * answer;
        if (n <= i)
            break;
    }
    cout << answer + 1;

    return 0;
}