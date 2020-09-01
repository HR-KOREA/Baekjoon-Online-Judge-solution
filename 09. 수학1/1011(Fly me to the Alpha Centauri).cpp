#include <string>
#include <iostream>
using namespace std;

int main()
{
    int t = 0;//테스트케이스 개수
    long long x, y = 0;//좌표
    long long sum = 1;
    long long answer = 0;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        for (int j = 1; j < (y - x); j++)
        {
            sum += j;
            answer++;
            if (y - x <= sum)
                break;
            if (j >= 2)
            {
                sum += j;
                answer++;
            }
            if (y - x <= sum)
                break;
        }
        cout << answer + 1 << "\n";
        sum = 1;
        answer = 0;
    }

    return 0;
}