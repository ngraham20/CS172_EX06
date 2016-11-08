/*
	Student: Nathaniel Graham
	Instructor: Steven Johnson
	Class: CS 172
*/
#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
using namespace std;

int main()
{
	srand(time(NULL)); // initializes randomizer

	ofstream output; // defines output to file

	ifstream input("Excercise13_1.txt"); // attempts to read from file
	if (input.fail()) // if file doesn't exits
	{
		cout << "The file does not exist.\nCreating File. . ." << endl;
		output.open("Excercise13_1.txt"); // create file
		output.close(); // saves file
	}
	else
	{
		output.open("Excercise13_1.txt"); // opens file
		cout << "Writing to File. . .\n";
		for (int i = 0; i < 100; i++) // outputs 100 random numbers to file
		{
			string randomNumber = to_string(rand() % 100);
			output << randomNumber<< endl;
		}
		cout << "Done";
		output.close(); // closes file
	}
	return 0;
}