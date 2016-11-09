/*
Student: Nathaniel Graham
Instructor: Steven Johnson
Class: CS 172
*/
#include <iostream>
#include <string>
#include "Complex.h"
using namespace std;

int main()
{
	// collect user input for first complex number
	double a;
	double b;
	cout << "Please enter two numbers (a then b)\n>>";
	cin >> a;
	cout << ">>";
	cin >> b;
	Complex complex1(a, b);

	// collect user input for second complex number
	cout << "Please enter two numbers for complex number 2 (a then b)\n>>";
	cin >> a;
	cout << ">>";
	cin >> b;
	Complex complex2(a, b);

	cout << "Comp1: ";
	complex1.toString(); // print first

	cout << "Comp2: ";
	complex2.toString(); // print second

	Complex complex3 = complex1 + complex2;
	cout << "Addition: ";
	complex3.toString(); // print addition

	complex3 = complex1 - complex2;
	cout << "Subtraction: ";
	complex3.toString(); // print subtraction

	complex3 = complex1 * complex2;
	cout << "Multiplication: ";
	complex3.toString(); // print multiplication

	complex3 = complex1 / complex2;
	cout << "Division: ";
	complex3.toString(); // division

	return 0;
}