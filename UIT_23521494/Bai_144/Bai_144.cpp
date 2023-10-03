#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		cout << "Nguyen to";
	else cout << "Khong nguyen to";
	return 0;
}