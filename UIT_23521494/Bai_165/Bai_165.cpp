#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int t = 1;
	int k = 0;
	while (2 * t <= n)
	{
		t = t * 2;
		k++;
	}
	cout << k;
	return 0;
}