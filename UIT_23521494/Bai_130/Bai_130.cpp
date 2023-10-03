#include<iostream>

using namespace std;
int main()
{
	float x, y, z;
	cin >> x >> y >> z;
	if (x + y > z && y + z > x && z + x > y)
		cout << "Ton tai";
	else cout << "Khong ton tai";
	return 0;
}