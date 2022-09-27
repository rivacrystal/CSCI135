/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Lab 2A

This program asks for an input within a range and then squares it
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int num = 101;

	do {
		cout << "Please enter an integer between 0 and 100: ";
		cin >> num;

		if (num <= 0 || num >= 100) {
			continue;
		} else {
			cout << "Number squared is: " << pow(num, 2) << endl;
			continue;
		}
	}
	while (num <= 0 || num >= 100);

	return 0;
}