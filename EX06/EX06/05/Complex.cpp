#include <iostream>
#include <math.h>
#include "Complex.h"
using namespace std;

Complex::Complex()
{
	a = 0;
	b = 0;
}

Complex::Complex(double a, double b)
{
	this->a = a;
	this->b = b;
}

Complex::Complex(double a)
{
	this->a = a;
}


Complex::~Complex()
{
}

Complex Complex::add(Complex & complex) // adds numbers
{
	return Complex(a + complex.a, b + complex.b);
}

Complex Complex::subtract(Complex & complex) // subtracts numbers
{
	return Complex(a - complex.a, b - complex.b);
}

Complex Complex::multiply(Complex & complex) // multiplies numbers
{
	return Complex((a * complex.a - b * complex.b), (b * complex.a + a * complex.b));
}

Complex Complex::divide(Complex & complex) // divides numbers
{
	return Complex((a * complex.a + b * complex.b) / (complex.a * complex.a + complex.b * complex.b), (b * complex.a - a * complex.b) / (complex.a * complex.a + complex.b * complex.b));
}

double Complex::abs(Complex & complex) // returns absloute value of a complex number
{
	return sqrt(a*a + b*b);
}

Complex Complex::operator+(Complex & complex) // overload addition
{
	return Complex(a + complex.a, b + complex.b);
}

Complex Complex::operator-(Complex & complex) // overload subtraction
{
	return Complex(a - complex.a, b * - complex.b);
}

Complex Complex::operator*(Complex & complex) // overload multiplication
{
	//					(ab - bd) + (bc + ad)i
	return Complex((a * complex.a - b * complex.b),(b * complex.a + a * complex.b));
}

Complex Complex::operator/(Complex & complex) // overload division
{ 
	//					(ac + bd)/(c^2 + d^2) + (bc - ad)/(c^2 + d^2)i
	return Complex((a * complex.a + b * complex.b)/(complex.a * complex.a + complex.b * complex.b),(b * complex.a - a * complex.b)/(complex.a * complex.a + complex.b * complex.b));
}

void Complex::operator+=(Complex & complex) // overload +=
{
	a += complex.a;
	b += complex.b;
	return;
}

void Complex::operator-=(Complex & complex) // overload -=
{
	a -= complex.a;
	b -= complex.b;
	return;
}

void Complex::operator*=(Complex & complex) // overload *=
{
	a = a * complex.a - b * complex.b;
	b = b * complex.a + a * complex.b;
	return;
}

void Complex::operator/=(Complex & complex) // overload /=
{
	a = (a * complex.a + b * complex.b) / (complex.a * complex.a + complex.b * complex.b);
	b = (b * complex.a - a * complex.b) / (complex.a * complex.a + complex.b * complex.b);
	return;
}

Complex Complex::operator[](int binary) // overload []
{
	if (binary == 0)
	{
		return a;
	}
	else if (binary == 1)
	{
		return b;
	}
}

Complex Complex::operator-() // overload negative
{
	return Complex(-a,-b);
}

Complex Complex::operator+() // overload positive
{
	return Complex(a,b);
}

Complex Complex::operator++() // overload ++
{
	return Complex(a + 1, b + 1);
}

Complex Complex::operator--() // overload --
{
	return Complex(a-1,b-1);
}

void Complex::toString()
{
	cout << a << " + " << b << "i" << endl;
}
