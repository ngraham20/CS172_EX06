/*
Student: Nathaniel Graham
Instructor: Steven Johnson
Class: CS 172
*/
#include "Circle.h"
#define PI 3.14159;


Circle::Circle(double radius)
{
	this->radius = radius;
}


Circle::~Circle()
{
}

double Circle::getRadius() { return radius; }

double Circle::getDiameter() { return 2*radius; } // returns diameter

double Circle::getArea() { return radius*radius*PI; } // returns area

double Circle::getCircumferance() { return 2*radius*PI; } // returns circumferance

void Circle::setRadius(double radius)
{
	this->radius = radius;
}

bool Circle::operator<(const Circle & circle)
{
	if (radius < circle.radius)
	{
		return true;
	}
	else
		return false;
}

bool Circle::operator<=(const Circle & circle)
{
	if (radius <= circle.radius)
	{
		return true;
	}
	else
		return false;
}

bool Circle::operator==(const Circle & circle)
{
	if (radius == circle.radius)
	{
		return true;
	}
	else 
		return false;
}

bool Circle::operator!=(const Circle & circle)
{
	if (radius != circle.radius)
	{
		return true;
	}
	else
		return false;
}

bool Circle::operator>(const Circle & circle)
{
	if (radius > circle.radius)
	{
		return true;
	}
	else
		return false;
}

bool Circle::operator>=(const Circle & circle)
{
	if (radius >= circle.radius)
	{
		return true;
	}
	else
		return false;
}
