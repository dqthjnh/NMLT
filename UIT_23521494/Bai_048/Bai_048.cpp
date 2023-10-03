#include<iostream>

using namespace std;
int main()
{
	float x,n;
	cin >> x >> n;
	int t = x;
	int i = 1;
	while (i <= n)
	{
		t = t * (x + i);
		i++;
	}
	cout << t;
	return 0;
}