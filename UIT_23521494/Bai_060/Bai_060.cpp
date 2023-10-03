#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int tich = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}
	cout << tich;
	return 0;
}