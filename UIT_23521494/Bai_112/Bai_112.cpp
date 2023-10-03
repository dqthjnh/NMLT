#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = (float)4 - 2 / 4 - 1 / 5 - 1 / 6;
	float t = 1;
	float e = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		t = t * 16;
		e = ((float)4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6)) / t;
		s = s + e;
		i++;
	}
	cout << s;
	return 0;
}