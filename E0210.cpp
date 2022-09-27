/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Homework E2.10

This program tells a user the cost and distance for 100 miles of driving
*/

#include <iostream>
using namespace std;

int main() {
	double gallon, miles, price;

	cout << "Enter number of gallons of gas in the tank: ";
	cin >> gallon;
	cout << "Enter fuel efficency in miles per gallon: ";
	cin >> miles;
	cout << "Enter the price of gas per gallon: ";
	cin >> price;

	int distance = (gallon * miles);
	cout << "The cost for 100 miles is " << (100/miles)*price << endl;
	cout << "The car can go " << (gallon * miles) << " miles with the current amount of gas in the tank." << endl;

	return 0;
}