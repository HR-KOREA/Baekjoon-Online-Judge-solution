#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	cin >> a >> b;

	c = a * (b % 10);
	d = a * ((b / 10) % 10);
	e = a * (b / 100);

	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << a * b << endl;

	return 0;
}