#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count = 0;
	int num[10] = { 0, };
	int temp[42] = { 0, };

	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		num[i] = num[i] % 42;
	}
	for (int i = 0; i < 10; i++)
	{
		temp[num[i]]++;
	}
	for (int i = 0; i < 42; i++)
	{
		if (temp[i] > 0)
			count++;
	}
	cout << count;
	return 0;
}