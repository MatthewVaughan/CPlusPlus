// File Prologue for a .cpp file - it contains the implementation code
// Author: Matthew Vaughan
// Course: CS 1410 
// Project: Lab #1 Example Program
//        Illustrates strucure and style of a C++ program
// Date Last Modified: June 20160
//
// I declare that the following code was written by me or provided 
// by the instructor for this project. I understand that copying source
// code from any other source constitutes cheating, and that I will receive
// a zero on this project if I am found in violation of this policy.
// ---------------------------------------------------------------------------

// Need to #include the header file assocoiated with this .cpp file
#include "Header.h"

// declare global constants here, before main
// globals are stored in the data segment and can
// be seen throughout the program.
const int MAX = 5;

// main returns an integer and takes no parameters
// note that it is all lower case (C# is Main)
int main()
{
	// This program displays my student information
	// My student information is stored in these string objects
	string name = "";

	// prompt the user to enter their name
	cout << "\nHello, what is your name? ";

	// because the input may contain spaces, use the getline function
	getline(cin, name);

	// display the name back to the user -- the endl operator flushes the buffer and adds a new line
	cout << "\Welcome to C++ " << name <<", let the adventure begin!"<< endl;

	// every program should end with a system("PAUSE")
	// to hold the console window open
	cout << "\nGoodbye .....\n";
	system("PAUSE");

	// and finally, return zero
	return 0;
}

// The implementation of any functions go outside of main
int sumTwo(int n1, int n2)
{
	return (n1 + n2);
}
