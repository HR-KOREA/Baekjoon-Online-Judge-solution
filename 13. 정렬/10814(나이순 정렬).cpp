#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct person
{
	int age;
	string name;
	int count;
};
bool cmp(person a, person b)
{
	if (a.age > b.age)
	{
		return false;
	}
	else if (a.age == b.age)
	{
		if (a.count < b.count)
			return true;
		else
			return false;
	}
	else
		return true;
}
int main()
{
	int n = 0;
	vector<person> v;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		person temp;
		cin >> temp.age >> temp.name;
		temp.count = i;
		v.push_back(temp);
	}
	sort(v.begin(), v.end(), cmp);
	for (int i = 0; i < n; i++)
		cout << v[i].age << " " << v[i].name << "\n";
	return 0;
}