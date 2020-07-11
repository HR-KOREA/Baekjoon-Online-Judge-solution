#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n = 0;
	int sum = 0;
	cin >> n;
	char* number;
	number = new char[n];
	cin >> number;

	for (int i = 0; i < n; i++)
	{
		sum += int(number[i]) - '0';
	}
	cout << sum;
	delete[] number;

	return 0;
}