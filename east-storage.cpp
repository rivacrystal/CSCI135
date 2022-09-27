/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Lab 3B

This program allows the user to check the east basin storage by date
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
    	cerr << "File cannot be opened for reading." << endl;
    	exit(1); // exit if failed to open the file
	}

	string junk;        // new string variable
	getline(fin, junk); // read one line from the file

	string date;
	double eastSt, eastEl, westSt, westEl;

	string date2;
	cout << "Enter date: ";
	cin >> date2;

	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    	fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
						  // for example, to print the date and East basin storage:
	if (date == date2) {
		cout << eastSt << endl;
	}

	}

	fin.close();

	return 0;
}