#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	float d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	cout << d;
	return 0;
}