#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float ahh;
	float at = 2;
	int i = 2;
	while (i <= n)
	{
		ahh = (at * at + 2) / (2 * at);
		i++;
		at = ahh;
	}
	cout << ahh;
	return 0;
}