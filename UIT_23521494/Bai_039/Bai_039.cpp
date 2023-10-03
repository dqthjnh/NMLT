#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	float t = 1;
	int i = 1;
	while (i<=n)
	{
		t = t * (1 + (float)1 / (i * i));
		i++;
	}
	cout << t;
	return 0;
}