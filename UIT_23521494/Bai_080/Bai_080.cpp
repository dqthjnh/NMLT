#include<iostream>

using namespace std;
int main()
{
	float x, n;
	cin >> x >> n;
	float s = 1;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = s + (i + 1) * t;
		i++;
	}
	cout << s;
	return 0;
}