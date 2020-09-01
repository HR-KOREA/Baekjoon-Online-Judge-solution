#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a = 0, b = 0;
	while (cin >> a >> b)
	{
		if (a > 0 && b > 0 && a < 10 && b < 10)
			cout << a + b << "\n";
	}
	return 0;
}