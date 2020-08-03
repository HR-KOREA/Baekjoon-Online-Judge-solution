#include <iostream>
using namespace std;

int main()
{
	int t = 0;
	int a = 0;
	int b = 0;

	cin >> t;

	while (t > 0)
	{
		cin >> a >> b;
		cout << a + b << endl;
		t--;
	}
	return 0;
}