#include<iostream>

using namespace std;
int main()
{
	float x;
	cin >> x;
	int n;
	cin >> n;
	float t=1;
	int i = 1;
	while (i<=n)
	{
		t = t * x;
		i++;
	}
	cout << t;
	return 0;
}