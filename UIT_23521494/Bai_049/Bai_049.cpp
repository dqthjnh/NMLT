#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			cout << setw(4) << i;
		i++;
	}
	return 0;
}