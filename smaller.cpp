/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Lab 1A

This program chooses the smaller of two numbers
*/

# include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;

	if (num1 > num2)
	{
		cout << "The smaller of the two is " << num2 << endl;
	} else {
		cout << "The smaller of the two is " << num1 << endl;
	}
	
	return 0;
}