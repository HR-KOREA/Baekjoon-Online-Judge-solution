#include <iostream>
using namespace std;

int main()
{
	int n = 0;

	cin >> n;

	if ((n >= 1) && (n <= 9))
	{
		for (int i = 1; i <= 9; i++)
		{
			cout << n << " * " << i << " = " << i * n << endl;
		}
	}
	return 0;
}