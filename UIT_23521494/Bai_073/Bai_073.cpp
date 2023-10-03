#include<iostream>

using namespace std;
int main()
{
	float x, n;
	cin >> x >> n;
	float s = 0;
	float t = 1;
	float m = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m + i;
		s = s + t / m;
		i++;
	}
	cout << s;
	return 0;
}