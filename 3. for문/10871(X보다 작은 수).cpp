#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int i = 0;
	int n = 0;
	int x = 0;
	int arr1[10000];
	int arr2[10000];

	cin >> n >> x;
	for (i = 0; i < n; i++)
		cin >> arr1[i];
	for (i = 0; i < n; i++)
	{
		if (arr1[i] < x)
		{
			arr2[i] = arr1[i];
			cout << arr2[i] << " ";
		}
	}
	return 0;
}