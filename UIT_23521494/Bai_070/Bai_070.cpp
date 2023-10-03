#include<iostream>

using namespace std;
int main()
{
	float x, n;
	cin >> x >> n;
	float s = 0;
	float t = 1;
	int i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << s;
	return 0;
}