#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y;
	double A;
	double B;
	cout << "x = "; cin >> x;

	A = abs(4 * x - 1);
	// спосіб 1: розгалуження в скороченій формі
	if (x < 0)
		B = pow(x, 7) - 2 * x;
	if (0 <= x && x < 3)
		B = atan(x) * (exp(x) + 1) / 8;
	if (x >= 3)
		B = pow(x, 4) + exp(pow(x, 2 + 3));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// спосіб 2: розгалуження в повній формі
	if (x < 0)
		B = pow(x, 7) - 2 * x;
	else
		if (x >= 3)
			B = pow(x, 4) + exp(pow(x, 2 + 3));
		else
			B = atan(x) * (exp(x) + 1) / 8;
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;

}