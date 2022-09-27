/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Lab2D

This program works with Fibonacci sequences and arrays
*/

#include <iostream>
using namespace std;

int main(){
	int fib[60];
	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i < 60; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}

	for (int i = 0; i < 60; i++) {
		cout << fib[i] << endl;
	}

	return 0;
}