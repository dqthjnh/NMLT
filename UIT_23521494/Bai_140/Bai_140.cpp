#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	float delta = b * b - 4 * a * c;
	if (delta <= 0)
		if (delta == 0)
		{
			float x0 = -b / (2 * a);
			cout << x0;
		}
		else cout << "Vo nghiem";
	else
	{
		float x1 = (-b + sqrt(delta)) / 2 * a;
		float x2 = (-b - sqrt(delta)) / 2 * a;
		cout << x1 << ", " << x2;
	}
	return 0;
}