#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i++;
	}
	if (s == n)
		cout << "Hoan thien";
	else cout << "Khong hoan thien";
	return 0;
}