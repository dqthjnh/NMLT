#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	float x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float p = a + b + c;
	cout << p;
	return 0;
}