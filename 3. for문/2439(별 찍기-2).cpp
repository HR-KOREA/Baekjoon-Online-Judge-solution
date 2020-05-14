#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0;
	cin >> n;
	int c = n;
	for (int i = 1; i <= n; i++)
	{
		for (int b = c - 1; b > 0; b--)
			cout << " "; c--;
		for (int a = 0; a < i; a++)
			cout << "*";
		cout << "\n";
	}
	return 0;
}