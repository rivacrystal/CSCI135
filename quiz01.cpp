/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Quiz 1

I love C++
*/

#include <iostream>
using namespace std;

int main()
{
	int times;

	cout << "Please input a number: ";
	cin >> times;

	for (int i = 0; i < times; i++) {
		cout << "I love C++" << endl;
	}

	return 0;
}