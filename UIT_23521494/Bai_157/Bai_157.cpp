#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + (float)1 / i;
		cout << s;
		i++;
	}
	return 0;
}