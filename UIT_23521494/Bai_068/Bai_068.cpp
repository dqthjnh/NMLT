#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + t;
		i++;
	}
	cout << s;
	return 0;
}