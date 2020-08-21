#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

#define Max 21
int n = 0;
int board[Max][Max];//S(ij)
bool is_visit[Max];//�� ������ �迭
int Min_value = 1000000000;

void dfs(int num, int cnt)
{
	if (cnt == n / 2)//���� �� �����ٸ�
	{
		int start_a = 0;
		int link_a = 0;
		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				if (is_visit[i] && is_visit[j])
				{//�Ѵ� ��ŸƮ���̸�
					start_a += board[i][j];
					start_a += board[j][i];
				}//�ش� ij�����ֱ�
				if (!is_visit[i] && !is_visit[j])
				{//�Ѵ� ��ũ���̸�
					link_a += board[i][j];
					link_a += board[j][i];
				}//�ش� ij�����ֱ�
			}
		}
		if (Min_value > abs(start_a - link_a))
			Min_value = abs(start_a - link_a);//�ּҰ� ����
		return;
	}
	for (int i = num; i <= n; i++)
	{//i = 1���ϸ� �ð��ʰ� ��;;num���� �ޱ�
		if (!is_visit[i])
		{
			is_visit[i] = true;
			dfs(i + 1, cnt + 1);
			is_visit[i] = false;//�� ����Ŭ ���� �ɷ�ġ ���糡���� ���� ����� �� ã��	
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