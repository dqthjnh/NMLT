#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int ahh;
	int att = 1;
	int at = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = at + att;
		i++;
		att = at;
		at = ahh;
	}
	cout << ahh;
	return 0;
}