// Florese_FizzBuzz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int Request() {
	int Size = 0;
	while (Size <= 1) {
		cout << "How many numbers? ";
		cin >> Size;
		if (Size <= 1) cout << "Enter a larger number.";
	} return Size;
}
void *CreateArray(int Size, int Numbers[]) {
	int value;
	bool checked = false;
	while (checked == false) {
		cout << "Enter numbers upto your indicated size, enter at least 1 odd number this way: " << endl;
		for (int i = 0; i <= Size - 1; i++) {
			cin >> value;
			Numbers[i] = value;
		}
		cout << endl;

		for (int i = 0; i <= Size - 1; i++) {
			if (Numbers[i] % 2 != 0) {
				checked = true;
			}
		}
	}
	return Numbers;
}

int main()
{
	//Request Size
	int Size = Request();
	int *Numbers = new int[Size];
	int TotalOdd = 0;
	bool Even_Exists = false;
	//Populate Array
	CreateArray(Size, Numbers);
	
	//Even Check
	cout << "Even Numbers: ";
	for (int i = 0; i <= Size-1; i++) {
		if (Numbers[i] % 2 == 0) {
			cout  << Numbers[i] << " ";
			Even_Exists = true;
		}
		else {
			//Odd Summation
			TotalOdd += Numbers[i];
		}
	}
	//None Found
	if (Even_Exists == false) {
		cout << "There were no even numbers!" << endl;
	}
	cout << "Total of Odd Numbers: " << TotalOdd << endl;
}
