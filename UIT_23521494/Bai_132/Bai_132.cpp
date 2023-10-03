#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float xA, yA, xB, yB, xC, yC, xM, yM;
	cin >> xA >> yA >> xB >> yB >> xC >> yC >> xM >> yM;
	float SABC = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC) / 2;
	float SMAB = abs(xA * yB + xB * yM + xM * yA - xB * yA - xM * yB - xA * yM) / 2;
	float SMBC = abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC) / 2;
	float SMAC = abs(xA * yM + xM * yC + xC * yA - xM * yA - xC * yM - xA * yC) / 2;
	float S = SMAB + SMBC + SMAC;
	if (S = SABC)
		cout << "M trong";
	else cout << "M ngoai";
	return 0;
}