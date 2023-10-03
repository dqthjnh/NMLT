#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			t = t * i;
		i++;
	}
	cout << t;
	return 0;
}