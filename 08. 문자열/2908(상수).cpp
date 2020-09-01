#include <string>
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    string a;
    string b;
    string result;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    result = (a > b) ? a : b;

    cout << result << "\n";

    return 0;
}