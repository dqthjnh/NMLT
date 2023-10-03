#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			s = s + i;
		i++;
	}
	cout << s;
	return 0;
}