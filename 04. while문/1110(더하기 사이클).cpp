#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n = 0, count = 0;
	int first = 0;
	int newone = 0;
	cin >> n;
	int e = n;
	if (e < 10)
	{
		n = e * 10;
		count = 1;
	}
	while (newone != n)
	{
		count++;
		first = e / 10 + e % 10;
		newone = (e % 10) * 10 + (first % 10);
		e = newone;
	}
	cout << count;

	return 0;
}