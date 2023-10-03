#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = pow(t + s, (float)1 / (i + 1));
		i++;
	}
	cout << s;
	return 0;
}