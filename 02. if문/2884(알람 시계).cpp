#include <iostream>
using namespace std;

int main()
{
	int H = 0;
	int M = 0;
	int S = 0;

	cin >> H >> M;

	if ((H >= 0 && H <= 23) && (M >= 0 && M <= 59))
	{
		if ((H == 0) && (M < 45))
			H = 24;
		S = H * 60 + M - 45;
		H = S / 60;
		M = S - H * 60;
		cout << H << " " << M << endl;
	}
	return 0;
}