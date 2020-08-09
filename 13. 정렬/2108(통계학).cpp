#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	int n = 0;
	double av = 0;
	int center = 0;
	int most = 0;
	int range = 0;
	int* num;
	cin >> n;
	num = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		av += num[i];
	}
	av /= (double)n;
	av = floor(av + 0.5);// 산술평균
	sort(num, num + n);
	center = num[n / 2];// 중앙값
	range = num[n - 1] - num[0];// 범위

	int count[8001] = { 0, };
	for (int i = 0; i < n; i++)
		count[num[i] + 4000]++;//카운팅 정렬

	int max_count = 0;
	int break_index = 0;
	for (int i = 0; i < 8001; i++)
	{// max_count 구하기
		if (max_count < count[i])
		{
			max_count = count[i];
			break_index = i;
			most = i - 4000;
		}
	}
	for (int i = break_index + 1; i < 8001; i++)
	{//최빈값중 두번째로 작은 값
		if (max_count == count[i])
		{
			max_count = count[i];
			most = i - 4000;
			break;
		}
	}
	cout << av << "\n" << center << "\n" << most << "\n" << range << "\n";
}