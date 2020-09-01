#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

pair<int, int> xpos[100002];
int n = 0;

int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int a, b;
		cin >> a >> b;
		xpos[i] = make_pair(a, b);
	}
	sort(xpos + 1, xpos + n + 1);
	for (int i = 1; i <= n; i++)
		cout << xpos[i].first << " " << xpos[i].second << "\n";

	return 0;
}