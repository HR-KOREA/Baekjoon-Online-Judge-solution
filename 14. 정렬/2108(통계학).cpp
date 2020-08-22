#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int n = 0;
	double av = 0;
	int center = 0;
	int most = 0;
	int range = 0;
	int* num;
	cin >> n;
	num = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		av += num[i];
	}
	av /= (double)n;
	av = floor(av + 0.5);// ������
	sort(num, num + n);
	center = num[n / 2];// �߾Ӱ�
	range = num[n - 1] - num[0];// ����

	int count[8001] = { 0, };
	for (int i = 0; i < n; i++)
		count[num[i] + 4000]++;//ī���� ����

	int max_count = 0;
	int break_index = 0;
	for (int i = 0; i < 8001; i++)
	{// max_count ���ϱ�
		if (max_count < count[i])
		{
			max_count = count[i];
			break_index = i;
			most = i - 4000;
		}
	}
	for (int i = break_index + 1; i < 8001; i++)
	{//�ֺ��� �ι�°�� ���� ��
		if (max_count == count[i])
		{
			max_count = count[i];
			most = i - 4000;
			break;
		}
	}
	cout << av << "\n" << center << "\n" << most << "\n" << range << "\n";
}