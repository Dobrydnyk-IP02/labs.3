#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a;
	cout << "��e�i�� �����: "; cin >> a;
	double l = 1;
	double y;
	y = (1 + a) / 2;
	if (a <= 0) {
		cout << "����i�� ������� �����!!!!!";
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