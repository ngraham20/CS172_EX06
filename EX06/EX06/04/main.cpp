
/*
Student: Nathaniel Graham
Instructor: Steven Johnson
Class: CS 172
*/
#include <iostream>
#include "Circle.h"
using namespace std;

void printBool(bool);

int main()
{
	Circle c1(10);
	Circle c2(5);

	cout << "Is c1 less than c2?" << endl;
	printBool(c1 < c2);

	cout << "Is c1 greater than c2?" << endl;
	printBool(c1 > c2);

	return 0;
}

void printBool(bool truth)
{
	if (truth)
	{
		cout << "Yes!" << endl;
	}
	else if (!truth)
	{
		cout << "No!" << endl;
	}
}
