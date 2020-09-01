#include <iostream>
using namespace std;

int N;
int answer = 0;
int board[15];
//ex board[2] = 1 -> 3행 2열//인덱스가 행, 배열값이 열 
bool check(int num)
{
	for (int i = 0; i < num; i++)
	{
		if (board[i] == board[num])//열이 같으면
			return false;
		if (abs(board[num] - board[i]) == num - i)//대각선상에 위치해있으면
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
		board[num] = i;//열 값 늘려가기 
		if (check(num))//들어갈수있는자리 탐색
			Queen(num + 1);//다음행 검사
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> N;
	Queen(0);//0행부터 스타트
	cout << answer << "\n";

	return 0;
}