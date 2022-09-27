/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Quiz 03

I'm just writing a description, but I haven't been given the prompt yet.
Write a program that initializes an array of numbers from 1 to 10
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	double thingie[10];

	for (int i = 0; i < 10; i++) {
		thingie[i] = i+1;
		cout << thingie[i] << endl;
	}

	return 0;
}