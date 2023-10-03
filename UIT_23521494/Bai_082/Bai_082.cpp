#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, n;
	cin >> x >> n;
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = (float)t * sin(x);
		s = s + t;
		i++;
	}
	cout << s;
	return 0;
}