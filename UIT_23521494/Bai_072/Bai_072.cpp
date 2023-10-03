#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	float m = 0;
	int i = 1;
	while (i <= n)
	{
		m++;
		s = s + (float)1 / m;
		i++;
	}
	cout << s;
	return 0;
}