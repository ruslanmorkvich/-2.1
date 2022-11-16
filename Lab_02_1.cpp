// Lab_02.cpp
// Прізвище та ім’я
// Лабораторна робота №2.1.
// Лінійні програми.
// Варіант 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double alpha; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу

	cout << "alpha = "; cin >> alpha;

	z1 = (sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha)) / (cos(alpha) + 1 - 2 * pow(sin(2 * alpha), 2));
	z2 = 2 * sin(alpha);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
