#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

pair<int, string> arr[20001];

int main()
{
	int n = 0;
	string a;
	int b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		arr[i] = make_pair(a.size(), a);
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		if (arr[i].second != arr[i + 1].second)
			cout << arr[i].second << "\n";
	}
	return 0;
}