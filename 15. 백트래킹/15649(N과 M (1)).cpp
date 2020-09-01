#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int N, M = 0;
int num[9];
bool is_visit[9];

void backtrack(int digits)
{
	if (M == digits)
	{//�ڸ����� �� ����
		for (int i = 0; i < M; i++)
		{
			cout << num[i] << " ";
		}
		cout << "\n";
	}
	for (int i = 1; i <= N; i++)
	{
		if (!is_visit[i])
		{//�����ڸ��� �湮 ��������
			is_visit[i] = true;//�湮�Ѱɷ� ������ְ�
			num[digits] = i;//�ش� �ڸ��� i����
			backtrack(digits + 1);//�״��� �ڸ� Ž��
			is_visit[i] = false;
		}
	}
}
int main()
{
	cin >> N >> M;
	backtrack(0);

	return 0;
}