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
	{//자리수가 다 차면
		for (int i = 0; i < M; i++)
		{
			cout << num[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = index; i <= N; i++)
	{
		if (!is_visit[i])
		{//다음자리수 방문 안했을때
			is_visit[i] = true;//방문한걸로 만들어주고
			num[digits] = i;//해당 자리에 i대입
			backtrack(digits + 1, i + 1);//그다음 자리 탐색//수열 오름차순이므로 i+1
			is_visit[i] = false;
		}
	}
}
int main()
{
	cin >> N >> M;
	backtrack(0, 1);

	return 0;
}