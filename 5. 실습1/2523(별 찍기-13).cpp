#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	while (1)
	{
		if (n < 1 || n > 100)
		{
			cout << "´Ù½Ã" << "\n";
			cin >> n;
		}
		else
			break;
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << "\n";
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}