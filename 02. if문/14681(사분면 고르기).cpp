#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;

	cin >> a ? (a <= 1000 && a >= -1000 && a != 0) : 0;
	cin >> b ? (b <= 1000 && b >= -1000 && b != 0) : 0;

	if ((a > 0) && (b > 0))
		cout << "1" << endl;
	else if ((a < 0) && (b > 0))
		cout << "2" << endl;
	else if ((a < 0) && (b < 0))
		cout << "3" << endl;
	else if ((a > 0) && (b < 0))
		cout << "4" << endl;

	return 0;
}