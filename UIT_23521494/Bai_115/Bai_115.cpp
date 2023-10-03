#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int ahh;
	int att = -1;
	int at = 3;
	int i = 2;
	while (i <= n)
	{
		ahh = 5 * at + 6 * att;
		i++;
		att = at;
		at = ahh;
	}
	cout << ahh;
	return 0;
}