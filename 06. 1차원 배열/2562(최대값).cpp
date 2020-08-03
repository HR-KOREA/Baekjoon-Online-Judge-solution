#include <iostream>
using namespace std;

int main()
{
	int arr[9] = { 0 };
	int count = 0, temp = 0;

	for (int i = 0; i < 9; i++)
		cin >> arr[i];
	temp = arr[0];
	for (int i = 0; i < 9; i++)
	{
		if (temp < arr[i])
		{
			temp = arr[i];
			count = i;
		}
	}
	cout << temp << "\n" << count + 1;
	return 0;
}