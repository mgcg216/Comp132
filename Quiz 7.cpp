// Quiz 7.cpp : Defines the entry point for the console application.
// Programmer: Michael Gerrard Guerrero
// Date December 3 ,2013
// Quiz 7 Probemk
// Description: Data processsing numbers

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int size;
int main()
{
	ifstream input;
	input.open("numbers.dat");

	if(!input.is_open()){
		exit(EXIT_FAILURE);
	}

	if(input.is_open()) {
		while(size != 6) {
		input >> size;
		cout << "The number of elements in this group is " << size << endl;
		int array[50];
		cout << "The data in this group: ";
		for(int i = 0; i < size; ++i) {
			input >> array[i];

		}
					for(int i = 0; i < size; i++) {
				cout << array[i] << " ";
			}
		cout << endl;
		double sum = 0;
		for(int i = 0; i< size;i++) {
			sum = sum + array[i];
		}
		cout <<"Average " << sum/size << endl;
		}
	}
	system("pause");
	return 0;
}


