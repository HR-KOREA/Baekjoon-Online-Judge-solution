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
		check[num[i] - '0']++; //-'0'����� ��������
		//�� �����ڸ��� ī��Ʈ++
	for (int i = 0; i < 10; i++)
		cout << check[i] << "\n";
	return 0;
}