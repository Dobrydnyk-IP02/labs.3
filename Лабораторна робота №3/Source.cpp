#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a;
	cout << "¬вeдiть число: "; cin >> a;
	double l = 1;
	double y;
	y = (1 + a) / 2;
	if (a <= 0) {
		cout << "¬ведiть додатне число!!!!!";
	}
	else {
		while (fabs(y - l) > 0.0001)
		{
			l = y;
			y = (l + a / l) / 2;
		}
		cout << y;
	}
	return 0;
}