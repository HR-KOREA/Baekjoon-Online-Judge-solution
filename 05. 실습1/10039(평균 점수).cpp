#include <iostream>
using namespace std;

int main()
{
	int score[5] = { 0 };
	for (int a = 0; a < 5; a++)
	{
		score[a] = 0;
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> score[i];
		if (score[i] <= 100 && score[i] >= 0)
		{
			if (score[i] < 40)
				score[i] = 40;
			else if (score[i] % 5 != 0)
			{
				cout << "�ٽ� �Է��ϼ���" << "\n";
				i--;
			}
		}
		else
		{
			cout << "�ٽ� �Է��ϼ���" << "\n";
			i--;
		}
	}
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += score[i];
	}
	cout << sum / 5;
	return 0;
}