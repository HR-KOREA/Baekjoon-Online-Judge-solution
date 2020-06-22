#include <iostream>
#include <string>
using namespace std;

int main()
{
	string testcase;
	int n = 0;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int score = 0;
		int sum = 0;
		cin >> testcase;
		for (int i = 0; i < testcase.size(); i++)
		{
			if (testcase[i] == 'O')
			{
				score++;
				sum += score;
			}
			else
			{
				score = 0;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}