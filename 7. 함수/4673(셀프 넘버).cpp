#include <iostream>
#include <string>
using namespace std;
const int MAX = 10000;
int d(int num);

int main()
{
	bool selfnumber[10001] = { 0, };

	for (int i = 1; i <= MAX; i++)
	{
		selfnumber[d(i)] = true;//�����ѹ��� �ƴѰ͵�
		if (selfnumber[i] != true)//�����ѹ��̸����
			cout << i << "\n";
	}
	return 0;
}

int d(int num)
{
	string digit = to_string(num);//���ڿ��� ����ȯ

	for (int i = 0; i < digit.size(); i++)
		num += digit[i] - '0';//num�� ���ڸ����ϱ�
	if (num <= 10000)
		return num;
	return 0;
}