#include<iostream>

using namespace std;
int main()
{
	float a, b;
	cin >> a >> b;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	cout << a << b;
	return 0;
}