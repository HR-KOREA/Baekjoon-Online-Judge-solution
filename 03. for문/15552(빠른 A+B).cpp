#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 0;
	int a = 0, b = 0;
	cin >> t;

	if (t <= 1000000)
	{
		for (int i = 0; i < t; i++)
		{
			cin >> a >> b;
			cout << a + b << "\n";
		}
	}
	return 0;
}
/*본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다. 
입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.
C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고,
endl 대신 개행문자(\n)를 쓰자. 단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.*/