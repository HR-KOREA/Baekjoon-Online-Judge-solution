#include <iostream>
#include <vector>
using namespace std;
vector<int> key(10001, 0);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    int temp = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        key[temp]++;
    }
    for (int i = 0; i <= 10000; i++)
    {//카운팅 정렬
        for (int j = 0; j < key[i]; j++)
        {
            cout << i << "\n";
        }
    }
    return 0;
}