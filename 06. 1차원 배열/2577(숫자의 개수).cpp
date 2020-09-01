#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c = 0;
	int result = 0;
	int check[10] = { 0, };

	cin >> a >> b >> c;
	result = a * b * c;
	string num = to_string(result);

	for (int i = 0; i < num.size(); i++)
		check[num[i] - '0']++; //-'0'해줘야 원래숫자
		//각 숫자자리에 카운트++
	for (int i = 0; i < 10; i++)
		cout << check[i] << "\n";
	return 0;
}