#include <iostream>
using namespace std;

int main()
{
	int* arr;
	int n = 0;
	cin >> n;
	arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int temp = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < temp)
			temp = arr[i];
	}
	cout << temp << " ";
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > temp)
			temp = arr[i];
	}
	cout << temp;
	delete[] arr;
	return 0;
}