// Problem 7.4.cpp : Defines the entry point for the console application.
//
/*4. Start with a program that allows the user to input a number of integers, and then stores
them in an int array. Write a function called maxint() that goes through the array,
element by element, looking for the largest one. The function should take as arguments
the address of the array and the number of elements in it, and return the index number of
the largest element. The program should call this function and then display the largest
element and its index number. (See the SALES program in this chapter.)*/
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n = 1;
	int num[15];
	for (int j = 0; j <= 14; j++) {
		cout << "Enter an integer:\n";
		cin >> num[j];
	}
	for (int j = 0; j <= 14; j++) {
		if (num[j] > n)
			n = num[j];
	}
	cout << "The largest is:" << n << endl;
    return 0;
}

