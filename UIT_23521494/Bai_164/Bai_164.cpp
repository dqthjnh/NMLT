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
		s = 1 / (1 + s);
		i++;
	}
	cout << s;
	return 0;
}