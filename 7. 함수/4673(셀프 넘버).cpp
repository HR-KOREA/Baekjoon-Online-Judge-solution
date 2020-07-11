#include <iostream>
#include <string>
using namespace std;
const int MAX = 10000;
int d(int num);

int main()
{
	bool selfnumber[10001] = { 0, };

	for (int i = 1; i <= MAX; i++)
	{
		selfnumber[d(i)] = true;//셀프넘버가 아닌것들
		if (selfnumber[i] != true)//셀프넘버이면실행
			cout << i << "\n";
	}
	return 0;
}

int d(int num)
{
	string digit = to_string(num);//문자열로 형변환

	for (int i = 0; i < digit.size(); i++)
		num += digit[i] - '0';//num에 각자리더하기
	if (num <= 10000)
		return num;
	return 0;
}