#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int cnt = 0;
int board[9][9];
vector<pair<int, int>> v;

bool check(pair<int, int> zero)
{
	for (int sero = 0; sero < 9; sero++)
	{//���� �࿡ ������ã��
		if (board[zero.first][sero] == board[zero.first][zero.second] && sero != zero.second)
			return false;//�������
	}
	for (int garo = 0; garo < 9; garo++)
	{//���� ���� ������ã��
		if (board[garo][zero.second] == board[zero.first][zero.second] && garo != zero.first)
			return false;//�������
	}
	for (int box_x = zero.first / 3 * 3; box_x < zero.first / 3 * 3 + 3; box_x++)
	{//���� �ڽ��� ������ã��
		for (int box_y = zero.second / 3 * 3; box_y < zero.second / 3 * 3 + 3; box_y++)
		{
			if (board[box_x][box_y] == board[zero.first][zero.second] && (box_x != zero.first && box_y != zero.second))
				return false;//�������
		}
	}
	return true;
}
void Sudoku_DFS(int count)
{
	if (count == cnt)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
				cout << board[i][j] << " ";//���� ������ ���
			cout << "\n";
		}
		exit(0);//���俩������ �Ѱ��� ���
	}
	else
	{
		for (int i = 1; i <= 9; i++)
		{
			board[v[count].first][v[count].second] = i;//���� �־
			if (check(v[count]))//����������
				Sudoku_DFS(count + 1);//0����ִ� �����ڸ� DFSŽ��
		}
		board[v[count].first][v[count].second] = 0;//1~9�� �����ذ� �ƴҰ��
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	pair<int, int> zero;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> board[i][j];//�ʱ� ������ �Է�
			if (board[i][j] == 0)
			{
				cnt++;
				zero.first = i;
				zero.second = j;
				v.push_back(zero);
			}
		}
	}
	cout << "\n";
	Sudoku_DFS(0);

	return 0;
}