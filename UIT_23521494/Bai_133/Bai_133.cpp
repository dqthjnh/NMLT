#include <iostream>

using namespace std;
int main()
{
	float x, y, z;
	cin >> x >> y >> z;
	if (x + y > z && y + z > x && z + x > y)
		if (x == y && y == z)
			cout << "Deu";
		else
			if ((x * x == y * y + z * z) || (y * y == x * x + z * z) || (z * z == x * x + y * y))
				if (x == y || y == z || z == x)
					cout << "Vuong can";
				else cout << "Vuong";
			else
				if (x == y || y == z || z == x)
					cout << "Can";
				else cout << "Thuong";
	else cout << "Khong phai la tam giac";
	return 0;
}