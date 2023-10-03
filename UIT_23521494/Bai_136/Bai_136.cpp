#include<iostream>

using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	int n = x;
	while (n <= y)
	{
		bool dk1 = (n % 4 == 0) && (n % 100 != 0);
		bool dk2 = (n % 400 == 0);
		if (dk1 == true || dk2 == true)
			cout << n;
		n++;
	}
	return 0;
}