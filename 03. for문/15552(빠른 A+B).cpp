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
/*���������� for�� ������ Ǯ�� ���� �����ؾ� �� ���� �ִ�. 
����� ����� ������ ���� ���� �Է¹ްų� ����� �� �ð��ʰ��� �� �� �ִٴ� ���̴�.
C++�� ����ϰ� �ְ� cin/cout�� ����ϰ��� �Ѵٸ�, cin.tie(NULL)�� sync_with_stdio(false)�� �� �� ������ �ְ�,
endl ��� ���๮��(\n)�� ����. ��, �̷��� �ϸ� �� �̻� scanf/printf/puts/getchar/putchar �� C�� ����� ����� ����ϸ� �� �ȴ�.*/