#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int n;
int num = 0;
const int Min = 1000000001;
const int Max = -1000000001;
int Min_RESULT = Min;
int Max_RESULT = Max;
int cnt = 0;
vector<int> Num;
vector<int> Operator;

void DFS(int cnt, int plus, int minus, int multiply, int divide, int num)
{
	if (cnt == n - 1)
	{
		if (num < Min_RESULT)
			Min_RESULT = num;
		if (num > Max_RESULT)
			Max_RESULT = num;
	}
	if (plus > 0)
		DFS(cnt + 1, plus - 1, minus, multiply, divide, num + Num[cnt + 1]);
	if (minus > 0)
		DFS(cnt + 1, plus, minus - 1, multiply, divide, num - Num[cnt + 1]);
	if (multiply > 0)
		DFS(cnt + 1, plus, minus, multiply - 1, divide, num * Num[cnt + 1]);
	if (divide > 0)
		DFS(cnt + 1, plus, minus, multiply, divide - 1, num / Num[cnt + 1]);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int temp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		Num.push_back(temp);
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> temp;
		Operator.push_back(temp);
	}
	DFS(0, Operator[0], Operator[1], Operator[2], Operator[3], Num[0]);

	cout << Max_RESULT << "\n";
	cout << Min_RESULT << "\n";
	return 0;
}