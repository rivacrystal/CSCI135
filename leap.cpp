/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Lab 1C

This program determines if a year is a leap year
*/

#include <iostream>
using namespace std;

int main()
{
	int year;
	cout << "Enter year: ";
	cin >> year;

	if (year % 4 != 0) {
		cout << "Common year" << endl;
	} else if (year % 100 != 0) {
		cout << "Leap year" << endl;
	} else if (year % 400 != 0) {
		cout << "Common year" << endl;
	} else {
		cout << "Leap year" << endl;
	}

	return 0;
}