/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Lab 3D

This program checks which basin has more water on certain dates
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

	string date, date1, date2;
	string eastSt, eastEl, westSt, westEl;
	int size = 0;

	cout << "Enter earlier date: ";
	cin >> date1;
	cout << "Enter later date: ";
	cin >> date2;

	string el[365];
	int i = 0;
	string line;

  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignoring the remaining columns

    if (date >= date1 && date <= date2) {
    	el[i] = date + "  " + westEl;
    	i++;
    }

  }

for (int j = i; j >= 0; j--) {
	cout << el[j] << " ft" << endl;
}

  fin.close();

	return 0;
}