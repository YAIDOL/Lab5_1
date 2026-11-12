// Lab 5_1
// Погонюк Ілля
// Лабораторна робота № 5.1
// Функції що містять арифметичний вираз.
// Варіант 2
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(const double a, const double b, const double c); 
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double d = f(1, t + s, s);
	double e = f(t, s*t, 1);
	double h = f(s, 1, t);

	double g = (d + e)/(1 + h * h);

	cout << "Result: = " << g << endl;
	cout << "Result = " << fixed << setprecision(4) << g << endl;

	return 0;
}
double f(const double a, const double b, const double c) 
{
	return a * sin(b) + b * sin(a) + c * c;
}
