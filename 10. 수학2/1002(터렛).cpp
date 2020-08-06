#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t = 0;
    double x1 = 0, y1 = 0, r1 = 0;
    double x2 = 0, y2 = 0, r2 = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        int r = r1 + r2;
        if (d == 0 && r1 == r2)//���� ��ġ�϶�-���� ��ħ
            cout << -1 << "\n";
        else if (d<r && d>abs(r1 - r2))
            cout << 2 << "\n";
        else if (d == r || d == abs(r1 - r2))//�����ϰų� ����
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}