#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int k, n;
	cin >> k >> n;
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + pow(i, k);
		i++;
	}
	cout << s;
	return 0;
}