#include <iostream>
using namespace std;

int main()
{
	int c = 0;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		float* score;
		int n = 0;
		cin >> n;
		score = new float[n];
		int sum = 0;
		float ave = 0;
		float count = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> score[j];
			sum += score[j];
		}
		ave = sum / n;
		for (int j = 0; j < n; j++)
		{
			if (ave < score[j])
				count++;
		}
		cout << fixed;
		cout.precision(3);
		cout << (count / n) * 100 << "%" << "\n";
		delete[] score;
	}
	return 0;
}