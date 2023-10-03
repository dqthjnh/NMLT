#include<iostream>

using namespace std;
int main()
{
	int n;
	cin >> n;
	bool dk1 = (n % 4 == 0) && (n % 100 != 0);
	bool dk2 = n % 400 == 0;
	if (dk1 == true || dk2 == true)
		cout << "+1";
	else cout << "0";
	return 0;
}