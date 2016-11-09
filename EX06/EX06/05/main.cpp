#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;

int main()
{
	double a;
	double b;
	cout << "Please enter two numbers (a then b)\n>>";
	cin >> a;
	cout << ">>";
	cin >> b;
	Complex complex1(a, b);

	cout << "Please enter two numbers for complex number 2 (a then b)\n>>";
	cin >> a;
	cout << ">>";
	cin >> b;
	Complex complex2(a, b);

	cout << "Comp1: ";
	complex1.toString();

	cout << "Comp2: ";
	complex2.toString();

	Complex complex3 = complex1 + complex2;
	cout << "Addition: ";
	complex3.toString();

	complex3 = complex1 - complex2;
	cout << "Subtraction: ";
	complex3.toString();

	complex3 = complex1 * complex2;
	cout << "Multiplication: ";
	complex3.toString();

	complex3 = complex1 / complex2;
	cout << "Division: ";
	complex3.toString();

	return 0;
}