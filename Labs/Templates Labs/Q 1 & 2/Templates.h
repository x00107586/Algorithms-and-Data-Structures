#pragma once
#include <iostream>

template<typename T>
class Templates
{
public:
	Templates();
	Templates(int s);
	void addEntry();
	void print();
	void totalValue();
	~Templates();
protected:
	T *myArray; // Declaring a pointer of type T to myArray
	int size;
};

template<typename T>
Templates<T>::Templates()
{}

template<typename T>
Templates<T>::Templates(int s)
{
	size = s;
	myArray = new T[size];	// Initialising myArray with size
}

template<typename T>
void Templates<T>::addEntry()
{
	for (int i = 0;i < size;i++)
	{
		cout << "Enter a value" << endl;	// Taking inputs from a user
		cin >> myArray[i];	// Storing inputs in the array
	}
	cout << endl;
}

template<typename T>
void Templates<T>::totalValue()
{
	T total = 0.0;
	for (int i = 0;i < size;i++)
	{
		total += myArray[i];	// Summing the values of the array and storing them in a variable "total"
	}
	cout << "The total is: " << total << endl << endl;
}

template<typename T>
void Templates<T>::print()
{
	cout << "The data entered was: " << endl;
	for (int i = 0;i < size;i++)
	{
		cout << myArray[i] << endl;	// Printing the array
	}
	cout << endl;
}

template<typename T>
Templates<T>::~Templates()
{
	delete[] myArray;	// Deconstructor
}
