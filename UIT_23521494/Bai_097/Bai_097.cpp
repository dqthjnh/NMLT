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
		t = t * x;
		s = sqrt(t + s);
		i++;
	}
	cout << s;
	return 0;
}