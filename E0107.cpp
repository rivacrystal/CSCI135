/*
Author: Riva A. Crystal
Course: CSCI135
Instructor: Genady Maryash
Assignment: Homework E1.7

This program prints things on three different lines
*/

#include <iostream>
using namespace std;

int main()
{
    string a, b, c;

    cout << "Please enter a name: ";
    cin >> a;
    cout << "Please enter another name: ";
    cin >> b;
    cout << "Please enter yet another name: ";
    cin >> c;

    cout << a << endl << b << endl << c << endl;

    return 0;
}