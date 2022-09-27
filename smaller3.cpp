/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Lab 1B

This program chooses the smaller of three numbers
*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;

	if (num1 > num2) {
		if (num2 > num3) {
			cout << "The smallest number is " << num3 << endl;
		} else {
			cout << "The smallest number is " << num2 << endl;
		}
	} else {
		if (num1 > num3) {
			cout << "The smallest number is " << num3 << endl;
		} else {
			cout << "The smallest number is " << num1 << endl;
		}
	}
	return 0;
}