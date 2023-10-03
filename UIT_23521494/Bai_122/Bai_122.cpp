#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int ahh, bhh;
	int at = 1;
	int bt = 1;
	int i = 2;
	while (i <= n)
	{
		ahh = 3*bt + 2*at;
		bhh = at + 3*bt;
		i++;
		at = ahh;
		bt = bhh;
	}
	cout << ahh << bhh;
	return 0;
}