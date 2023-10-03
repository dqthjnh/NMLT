#include<iostream>

using namespace std;
int main()
{
	float x, n;
	cin >> x >> n;
	float s = 1;
	float t = 1;
	int m = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
	}
	cout << s;
	return 0;
}