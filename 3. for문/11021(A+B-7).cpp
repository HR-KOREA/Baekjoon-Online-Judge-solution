#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 0;
	int a = 0, b = 0;
	cin >> t;

	if (t <= 1000000)
	{
		for (int i = 0; i < t; i++)
		{
			cin >> a >> b;
			cout << "Case #" << i + 1 << ": " << a + b << "\n";
		}
	}

	return 0;
}