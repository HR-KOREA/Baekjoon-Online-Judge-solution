#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

#define Max 21
int n = 0;
int board[Max][Max];//S(ij)
bool is_visit[Max];//팀 나누는 배열
int Min_value = 1000000000;

void dfs(int num, int cnt)
{
	if (cnt == n / 2)//팀을 다 나눴다면
	{
		int start_a = 0;
		int link_a = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				if (is_visit[i] && is_visit[j])
				{//둘다 스타트팀이면
					start_a += board[i][j];
					start_a += board[j][i];
				}//해당 ij더해주기
				if (!is_visit[i] && !is_visit[j])
				{//둘다 링크팀이면
					link_a += board[i][j];
					link_a += board[j][i];
				}//해당 ij더해주기
			}
		}
		if (Min_value > abs(start_a - link_a))
			Min_value = abs(start_a - link_a);//최소값 대입
		return;
	}
	for (int i = num; i <= n; i++)
	{//i = 1로하면 시간초과 남;;num으로 받기
		if (!is_visit[i])
		{
			is_visit[i] = true;
			dfs(i + 1, cnt + 1);
			is_visit[i] = false;//한 사이클 돌고 능력치 조사끝나면 다음 경우의 수 찾기	
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> board[i][j];
	dfs(1, 0);
	cout << Min_value << "\n";

	return 0;
}