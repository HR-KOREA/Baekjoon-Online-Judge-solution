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
	{//같은 행에 같은값찾기
		if (board[zero.first][sero] == board[zero.first][zero.second] && sero != zero.second)
			return false;//있을경우
	}
	for (int garo = 0; garo < 9; garo++)
	{//같은 열에 같은값찾기
		if (board[garo][zero.second] == board[zero.first][zero.second] && garo != zero.first)
			return false;//있을경우
	}
	for (int box_x = zero.first / 3 * 3; box_x < zero.first / 3 * 3 + 3; box_x++)
	{//같은 박스에 같은값찾기
		for (int box_y = zero.second / 3 * 3; box_y < zero.second / 3 * 3 + 3; box_y++)
		{
			if (board[box_x][box_y] == board[zero.first][zero.second] && (box_x != zero.first && box_y != zero.second))
				return false;//있을경우
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
				cout << board[i][j] << " ";//정답 스도쿠 출력
			cout << "\n";
		}
		exit(0);//정답여러개중 한개만 출력
	}
	else
	{
		for (int i = 1; i <= 9; i++)
		{
			board[v[count].first][v[count].second] = i;//숫자 넣어봄
			if (check(v[count]))//문제없으면
				Sudoku_DFS(count + 1);//0들어있는 다음자리 DFS탐색
		}
		board[v[count].first][v[count].second] = 0;//1~9다 최적해가 아닐경우
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
			cin >> board[i][j];//초기 스도쿠 입력
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