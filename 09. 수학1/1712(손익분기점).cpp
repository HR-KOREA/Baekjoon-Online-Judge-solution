#include <string>
#include <iostream>
using namespace std;

int main()
{
    int fixed_cost = 0;//�������
    int variable_cost = 0;//�������
    int cost = 0;//��Ʈ�� ����
    int n = 1;//������
    int calc = 0;

    cin >> fixed_cost >> variable_cost >> cost;

    if (cost != variable_cost)
        calc = fixed_cost / (cost - variable_cost);
    if (calc < 0 || cost == variable_cost)
    {
        cout << -1 << "\n";
        return 0;
    }
    cout << calc + 1 << "\n";

    return 0;
}