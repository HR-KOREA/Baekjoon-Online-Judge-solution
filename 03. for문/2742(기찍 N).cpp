#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;

	if (n <= 100000)
	{
		for (int i = n; i >= 1; i--)
			cout << i << "\n";
	}
	return 0;
}