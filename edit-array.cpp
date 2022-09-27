/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Lab2C

This program practices with arrays
*/

#include <iostream>
using namespace std;

int main(){
	int myData[10], i = 1, v;

	for (int j = 0; j < 10; j++) { 
		myData[j] = 1;
	}

do {
	for (int i = 0; i < 10; i++) {
		cout << myData[i] << " ";
	}

	cout << endl << endl;

	cout << "Input index: ";
	cin >> i;
	cout << "Input value: ";
	cin >> v;

	if (0 <= i && i < 10) {
		myData[i] = v;
	} else {
		cout << "Index out of range. Exit." << endl;
	}
}
while (0 <= i && i < 10);



	// If the index i is within the arrage range (0 <= i < 10), update the asked cell, myData[i] = v and go back to step 3.  Otherwise, if index i is out of range, the program exits

	return 0;
}