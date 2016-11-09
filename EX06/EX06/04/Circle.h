/*
Student: Nathaniel Graham
Instructor: Steven Johnson
Class: CS 172
*/
#pragma once
class Circle
{
public:
	Circle(double radius);
	~Circle();

	double getRadius();
	double getDiameter();
	double getArea();
	double getCircumferance();

	void setRadius(double);

	// operator overload functions
	bool operator<(const Circle& circle);
	bool operator<=(const Circle& circle);
	bool operator==(const Circle& circle);
	bool operator!=(const Circle& circle);
	bool operator>(const Circle& circle);
	bool operator>=(const Circle& circle);

private:
	double radius;
	static int numberOfObjects;
};

