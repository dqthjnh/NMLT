#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		dem++;
		t = t / 10;
	}
	cout << dem;
	return 0;
}