#include <iostream>
#include <string>
using namespace std;
int han(int num);

int main()
{
	int n = 0;
	int count = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
		if (han(i) == true)
			count++;
	cout << count;
}

int han(int num)
{
	string digit = to_string(num);
	int d = (digit[1] - '0') - (digit[0] - '0');//°øÂ÷

	for (int i = 1; i < digit.size(); i++)
	{
		if ((digit[i] - '0') - (digit[i - 1] - '0') != d)
		{
			return false;
		}
	}
	return true;
}