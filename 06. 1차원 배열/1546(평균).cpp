#include <iostream>
#include <string>
using namespace std;

int main()
{
	float max = 0;
	float sum = 0;
	float* score;
	int n = 0;
	cin >> n;
	score = new float[n];

	for (int i = 0; i < n; i++)
		cin >> score[i];
	max = score[0];
	for (int i = 0; i < n; i++)
		if (max < score[i])
			max = score[i];
	for (int i = 0; i < n; i++)
		score[i] = (score[i] / max) * 100;
	for (int i = 0; i < n; i++)
		sum += score[i];

	cout << fixed;//소수점을 고정한다
	cout.precision(2);//소수점 2자리까지 출력
	cout << sum / n;

	delete[] score;
	return 0;
}