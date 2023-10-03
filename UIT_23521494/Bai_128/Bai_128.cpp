#include<iostream>

using namespace std;
int main()
{
	float a, b;
	cin >> a >> b;
	if (a > b)
	{
		float temp = a;
		a = b;
		b = temp;
	}
	cout << a << b;
	return 0;
}