#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 2;
	}
	cout << s;
	return 0;
}