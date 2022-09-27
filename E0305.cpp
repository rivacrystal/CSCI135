/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Homework E3.5

This program states whether three numbers are increasing, decreasing, or neither
*/

#include <iostream>
using namespace std;

int main() {
	int one, two, three;

	cout << "Enter three numbers: ";
	cin >> one >> two >> three;

	if (one < two && two < three) {
		cout << "Increasing";
	} else if (one > two && two > three) {
		cout << "Decreasing";
	} else {
		cout << "Neither";
	}

	cout << endl;

	return 0;
}