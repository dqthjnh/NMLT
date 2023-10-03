#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int flag = 0;
	int i = 0;
	while (i <= n)
	{
		if (i * i == n)
			flag = 1;
		i++;
	}
	if (flag == 1)
		cout << "Chinh phuong";
	else cout << "Khong chinh phuong";
	return 0;
}