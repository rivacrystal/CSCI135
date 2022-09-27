/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Lab2A

This program prints the intergers between two numbers
*/

#include <iostream>
using namespace std;

int main() {
	int L, U;

	cout << "Please enter L: ";
	cin >> L;
	cout << "Please enter U: ";
	cin >> U;

	for(int i = L; i < U; i++) {
		cout << i << " ";
	}

	cout << endl;
	
	return 0;
}