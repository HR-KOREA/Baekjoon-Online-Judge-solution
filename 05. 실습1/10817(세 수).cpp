#include <iostream>
using namespace std;

int main()
{
	int n[3] = { 0,0,0 };
	int i = 0;
	while (n[i] == NULL)
	{
		cin >> n[i];
		if (n[i] > 100 || n[i] < 0)
		{
			cout << "´Ù½Ã" << "\n";
			i--;
		}
		i++;
	}
	int temp = 0;
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			if (n[a] >= n[b])
			{
				temp = n[b];
				n[b] = n[a];
				n[a] = temp;
			}
		}
	}
	cout << n[1];
	return 0;
}