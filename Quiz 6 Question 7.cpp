// Quiz 6 Question 7.cpp : Defines the entry point for the console application.
// Programmer: Michael Gerrard Guerrero
// Description : Question 7
// Read a set of numerical grades from the keyboard into an array.  
// The maximum number of grades to be entered is 50, and data entry should be terminated when a negative number is entered.  
// Have your program sort and print the grades in descending order.

#include "stdafx.h"
#include <iostream> 
using namespace std; 

const int SIZE = 50;

int main( ){
	double array[SIZE];
	int i = 0;
	int j ,k;
	cout << "Enter up to 50 grades. I will sort them. (input negative number to exit)" << endl;
		while( i >= 0) {
	for (int i =  0; i <= SIZE ; i++){
	
		cin >> array[i];
	 }
	}
		sort(array[]);
		for (int i = 0; i != SIZE; i++) 
    cout << array[i];
	return 0;
}

double sort(double aarrycpy[],int i)  
{	double temp;
	int x;
	int swaps;
	while(swaps>0){  
	for(x=0;x<i;x++)
		                             
		if (aarrycpy[x] < aarrycpy[x+1])
			swaps=0;  
			temp=aarrycpy[x+1];
	aarrycpy[x+1]=aarrycpy[x];
	aarrycpy[x]=temp;
		swaps++;  
}