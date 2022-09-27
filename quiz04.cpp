/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Quiz 04

I'm just writing a description, but I haven't been given the prompt yet.
Write a program that opens and reads a file called data.txt, which contains lines of text
with names of colors and their hex values. Read and print each line. Close the file after processing it.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main() {
	ifstream fin("data.txt");
	if (fin.fail()) {
    	cerr << "File cannot be opened for reading." << endl;
    	exit(1);
	}

	string color, hex;

	while(fin >> color >> hex) {
		cout << color << " " << hex << endl;
	}

	fin.close();

	return 0;
}