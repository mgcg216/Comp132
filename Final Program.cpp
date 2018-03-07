// Final Program.cpp : Defines the entry point for the console application.
// Programmer: Michael Gerrard Guerrero
// Date December 3 ,2013
// Final Program Problem
// Description: Data processsing numbers and finding average

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int size;
void process(double array[], int size);
int main()
{
	cout << "Please enter the name of the file do you want to enter: ";
	string name = "";
	ifstream input;
	ofstream myfile;
	getline(cin, name);
	input.open(name);

	if(!input.is_open()){
		exit(EXIT_FAILURE);
	}

	//	if(input.is_open()) {

		input >> size;
		double *array = new double[size];


		for(int i = 0; i < size; ++i) {
			input >> array[i];


		}

				process(array,size);
	

	
		cout << "Please enter the name of the output file: ";
			string name2 = "";

			getline(cin, name2);
			ofstream myFile(name2);
			myFile.open(name2);
			myFile << size << endl;
		for (int i = 0; i < size ; i++) {

			myfile << array[i] << endl;
	
		}
	    

		double sum = 0;
		for(int i = 0; i< size;i++) {
			sum = sum + array[i];
		}
		myfile <<"Average " << sum/size << endl;

		cout << "Done" << endl;




	//}
				myfile.close();

	return 0;
}
void process(double nums[], int numels)
{
	for(int i = 0; i < numels-1; i++) {
		double min = 100;
		int minAt = i +1;
		for(int j = i; j<numels;j++) {
			if(nums[j]<min) {
				minAt = j;
				min = nums[j];
			}
		}
		double temp = nums[i];
		nums[i] = nums[minAt];
		nums[minAt] = temp;
	}

}
