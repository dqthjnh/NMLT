#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int ahh;
	int at = -2;
	int tt = 3;
	int pp = 7;
	int i = 2;
	while (i <= n)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}
	cout << ahh;
	return 0;
}