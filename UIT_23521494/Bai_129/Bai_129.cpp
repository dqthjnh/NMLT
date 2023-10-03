#include<iostream>

using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		float temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		float temp = b;
		b = c;
		c = temp;
	}
	cout << a << b << c;
	return 0;
}