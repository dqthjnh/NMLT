#include<iostream>

using namespace std;
int main() 
{
	float x;
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x10 = x8 * x2;
	float x11 = x10 * x;
	cout << x11;
	return 0;
}