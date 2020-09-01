#include <iostream>
using namespace std;

int N;
int answer = 0;
int board[15];
//ex board[2] = 1 -> 3�� 2��//�ε����� ��, �迭���� �� 
bool check(int num)
{
	for (int i = 0; i < num; i++)
	{
		if (board[i] == board[num])//���� ������
			return false;
		if (abs(board[num] - board[i]) == num - i)//�밢���� ��ġ��������
			return false;
	}
	return true;
}
void Queen(int num)
{
	if (num == N)
	{
		answer++;
		return;
	}
	for (int i = 0; i < N; i++)
	{
		board[num] = i;//�� �� �÷����� 
		if (check(num))//�����ִ��ڸ� Ž��
			Queen(num + 1);//������ �˻�
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N;
	Queen(0);//0����� ��ŸƮ
	cout << answer << "\n";

	return 0;
}