/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Project 1 Part 1

This program interprets directions
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	while (cin >> s) {
		if (s == "R") {
			cout << "Right" << endl;
		} else if (s == "L") {
			cout << "Left" << endl;
		} else if (s == "U") {
			cout << "Up" << endl;
		} else {
			cout << "Down" << endl;
		}
	}

	return 0;
}
