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

	cout << "Which file would you like to open?\n>>";

	do // continue to ask for a valid file name until one is given.
	{
		cin >> userInput;
		input.open(userInput.c_str());
		if (input.fail())
			cout << "That file does not exist. Please enter a valid file name.\n>>";

	}	while (input.fail());
	
	cout << "Opening file: " << userInput << ". . ." << endl;
	int characterCount = 0;
	string fileContents;
	while (!input.eof()) // get all characters in the file
	{
		getline(input, fileContents);

	}
	for (int i = 0; i < fileContents.size(); i++) // count all the characters in the file
	{
		characterCount++;
	}
	cout << "There are: " << characterCount << " characters in this file." << endl; // print the count of the characters in the file
	output.close(); // close the text document

	return 0;
}