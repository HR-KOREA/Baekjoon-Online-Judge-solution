#include <iostream>
using namespace std;

int main()
{
	int ham[3] = { 0 };
	int drink[2] = { 0 };
	int lowham = 0, lowdrink = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> ham[i];
		if (ham[i] < 100 || ham[i]>2000)
		{
			cout << "다시 입력하세요";
			i--;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		cin >> drink[i];
		if (drink[i] < 100 || drink[i]>2000)
		{
			cout << "다시 입력하세요";
			i--;
		}
	}
	lowham = ham[0];
	lowdrink = drink[0];
	for (int i = 0; i < 3; i++)
	{
		if (lowham > ham[i])
			lowham = ham[i];
	}
	for (int i = 0; i < 2; i++)
	{
		if (lowdrink > drink[i])
			lowdrink = drink[i];
	}
	cout << lowham + lowdrink - 50;
	return 0;
}