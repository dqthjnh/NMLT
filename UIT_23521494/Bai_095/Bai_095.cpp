#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	int i = n;
	while (i > 0)
	{
		s = sqrt(i + s);
		i--;
	}
	cout << s;
	return 0;
}