#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int ahh;
	int att = -1;
	int at = 3;
	int t = 2;
	int i = 2;
	while (i <= n)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	cout << ahh;
	return 0;
}