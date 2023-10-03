#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x, n;
	cin >> x >> n;
	float s = 0;
	float t = x;
	int i = 1;
	while (i <= n)
	{
		t = sin(t);
		s = s + t;
		i++;
	}
	cout << s;
	return 0;
}