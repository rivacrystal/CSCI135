/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Project 1C

This program goes through multiple lines of directions for a maze
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int maze[6][6] = {
   		1,0,1,1,1,1,
   		1,0,0,0,1,1,
   		1,0,1,0,0,1,
   		1,0,1,0,1,1,
   		1,0,0,0,0,0,
   		1,1,1,1,1,1
	};

	int i = 0;
	int j = 1;

	char s;
	char end = ';';

	while (cin >> s >> end) {
		if (s == 'R') {
			maze[i][j++];
		} else if (s == 'L') {
			maze[i][j--];
		} else if (s == 'U') {
			maze[i--][j];
		} else if (s == 'D') {
			maze[i++][j];
		}
	}

	if (maze[i][j] == maze[4][5]) {
		cout << "You got out of the maze." << endl;
	} else {
		cout << "You are stuck in the maze." << endl;
	}

	return 0;
}