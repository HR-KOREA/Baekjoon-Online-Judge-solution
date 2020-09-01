#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int N, M = 0;
int num[9];
bool is_visit[9];

void backtrack(int digits, int index)
{
	if (M == digits)
	{//�ڸ����� �� ����
		for (int i = 0; i < M; i++)
		{
			cout << num[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = index; i <= N; i++)
	{
		num[digits] = i;//�ش� �ڸ��� i����
		backtrack(digits + 1, i);//�״��� �ڸ� Ž��
	}
}
int main()
{
	cin >> N >> M;
	backtrack(0, 1);

	return 0;
}