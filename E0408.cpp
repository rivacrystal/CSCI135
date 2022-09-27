/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Homework E4.8

This program prints every letter on a string in a different line
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string phrase;

	cout << "Enter word: ";
	cin >> phrase;

	for (int i = 0; i < phrase.length(); i++) {
		cout << phrase[i] << endl;
	}


	return 0;
}