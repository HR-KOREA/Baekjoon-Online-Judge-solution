#include <iostream>
#include <string>
using namespace std;

int main()
{
	int r = 0;
	int t = 0;
	string s;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		cin >> r >> s;
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = 0; j < r; j++)
			{
				cout << s[i];
			}
		}
		cout << "\n";
	}
	return 0;
}