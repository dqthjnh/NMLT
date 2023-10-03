#include<iostream>

using namespace std;
int main()
{
	float a, b;
	cin >> a >> b;
	if (a == 0)
		if (b == 0)
			cout << "Vo so nghiem";
		else cout << "Vo nghiem";
	else
	{
		float x = (float)-b / a;
		cout << x;
	}
	return 0;
}