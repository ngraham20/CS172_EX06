/*
Student: Nathaniel Graham
Instructor: Steven Johnson
Class: CS 172
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream output; // output to file
	ifstream input; // input from file
	string userInput;

	string yearInput;
	string genderInput;
	string nameInput;

	do // continue to ask for a valid file name until one is given.
	{
		cout << "Enter the year: ";
		cin >> yearInput;
		cout << endl;
		cout << "Enter the gender: ";
		cin >> genderInput;
		cout << endl;
		cout << "Enter the name: ";
		cin >> nameInput;

		// append year to file
		string filename = "Babynameranking" + yearInput + ".txt";
		cout << filename << endl;
		input.open(filename); // attempt to open file
		if (input.fail())
		{
			cout << "That file does not exist. Please enter a valid file name.\n>>";
		}

	} while (input.fail());

	cout << "Opening file: " << userInput << ". . ." << endl;
	string fileContents;
	while (!input.eof())
	{
		// collects all information in the line (per loop)
		string maleName;
		string mNameCount;
		string femaleName;
		string fNameCount;
		string location;
		
		input >> location >> maleName >> mNameCount >> femaleName >> fNameCount; // saves all that information

		if (maleName == nameInput) // checks the information against a name
		{
			cout << maleName << " is ranked #" << location << " in the year " << yearInput << endl;
			break; // breaks the loop
		}
	}
	input.close(); // closes the file
	return 0;
}