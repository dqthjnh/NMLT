#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x;
	cin >> x;
	float s = 1;
	float t = 1;
	int m = 1;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6))
	{
		t = t * x;
		m = m * i;
		e = t / m;
		s = s + e;
		i++;
	}
	cout << s;
	return 0;
}