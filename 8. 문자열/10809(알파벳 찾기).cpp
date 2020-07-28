#include <iostream>
#include <string>
using namespace std;

int main()
{
	string alpabet = "abcdefghijklmnopqrstuvwxyz";
	string s;

	cin >> s;
	for (int i = 0; i < alpabet.size(); i++)
	{
		for (int j = 0; j < s.size(); j++)
		{
			if (alpabet[i] == s[j])
			{
				cout << j << " ";
				break;
			}
			if (j == s.size() - 1)
			{
				cout << "-1" << " ";
				break;
			}
		}
	}
	return 0;
}