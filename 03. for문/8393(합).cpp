#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	int a = 0;
	cin >> n;
	a = n;
	if ((n >= 1) && (n <= 10000))
		for (int i = 0; i < n; i++)
			a += i;
	cout << a;
	return 0;
}