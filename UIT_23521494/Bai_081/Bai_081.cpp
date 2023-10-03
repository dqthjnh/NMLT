#include<iostream>

using namespace std;
int main()
{
	float x, n;
	cin >> x >> n;
	float s = 0;
	float m = 1;
	int i = 0;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + 1 / m;
		i++;
	}
	cout << s;
	return 0;
}