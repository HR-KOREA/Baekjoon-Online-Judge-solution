#include <iostream>
using namespace std;

int main()
{
    int n = 0;//ī���� ����
    int m = 0;//��ģ ����
    int sum = 0;//ī��3�� ��
    int* card;
    cin >> n >> m;
    card = new int[n + 1];

    for (int i = 0; i < n; i++)
        cin >> card[i];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (i == j || i == k || j == k)
                    continue;
                else if (sum < (card[i] + card[j] + card[k]) && (card[i] + card[j] + card[k]) <= m)
                    sum = card[i] + card[j] + card[k];
            }
        }
    }
    cout << sum << "\n";

    delete[] card;
    return 0;
}