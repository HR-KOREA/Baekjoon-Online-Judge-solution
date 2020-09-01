#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    int i = 0;
    int count = 0;

    cin >> n;
    while (1)
    {
        string end = to_string(i);
        if (end.find("666") != string::npos)
            count++;
        if (count == n)
        {
            cout << i << "\n";
            break;
        }
        i++;
    }
    return 0;
}