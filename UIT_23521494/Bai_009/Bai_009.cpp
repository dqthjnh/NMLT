#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	float r, n;
	cin >> r >> n;
	float s = (float)1 / 2 * n * r * r * sin(2 * M_PI / n);
	cout << s;
	return 0;
}