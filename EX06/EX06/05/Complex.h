#pragma once
class Complex
{
public:
	Complex();
	Complex(double a, double b);
	Complex(double a);
	~Complex();
	
	// operation functions without overload
	Complex add(Complex& complex);
	Complex subtract(Complex& complex);
	Complex multiply(Complex& complex);
	Complex divide(Complex& complex);
	double abs(Complex& complex);

	// overloaded operation functions
	Complex operator+(Complex & complex);
	Complex operator-(Complex & complex);
	Complex operator*(Complex & complex);
	Complex operator/(Complex & complex);

	void operator+=(Complex & complex);
	void  operator-=(Complex & complex);
	void operator*=(Complex & complex);
	void operator/=(Complex & complex);

	Complex operator[](int); // returns a or b

	// unary operations
	Complex operator-();
	Complex operator+();
	Complex operator++();
	Complex operator--();

	void toString(); // prints the complex number
	
private:
	double a;
	double b;
};
