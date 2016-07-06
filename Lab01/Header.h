
// File Prologue for a typical header file
// - The header file contains class definitions and function declarations
// Author: Matthew Vaughan
// Course: CS 1410 
// Project: Lab #1 Example Program
// - Illustrates strucure and style of a C++ program
// Date Last Modified: June 2016
//
// I declare that the following code was written by me or provided 
// by the instructor for this project. I understand that copying source
// code from any other source constitutes cheating, and that I will receive
// a zero on this project if I am found in violation of this policy.
// ---------------------------------------------------------------------------

#pragma once

// The first thing we need to do is #include any required header files
// and declare that we will use the standard namespace
// Every program will require these.
#include <iostream>
#include <string>
using namespace std;

// Function declarations belong in the header file. This includes a function prologue
// that documents the function, and the function prototype. By convention, we only
// show datatpyes for the parameters.

// The sumTwo function
// Purpose: To add two integer values and return the result
// Parameters: The two integer values to be added
// Returns: the sum, as an integer
int sumTwo(int, int);