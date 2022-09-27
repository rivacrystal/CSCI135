/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Quiz 02

Compare two numbers
*/

#include <iostream>
using namespace std;

int main() {
	int x, y;

	cout << "Enter integer: ";
	cin >> x;

	cout << "Enter another integer: ";
	cin >> y;

	if (x > y) {
		cout << x << " is the bigger number";
	} else {
		cout << y << " is the bigger number";
	}

	cout << endl;

	return 0;
}