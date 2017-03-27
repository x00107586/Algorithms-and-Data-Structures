#include "Templates.h"
#include <iostream>
using namespace std;

int main()
{
	// For ints
	Templates<int> intArray(3);

	intArray.addEntry();
	intArray.print();
	intArray.totalValue();


//-----------------------------------------

	// For doubles
	Templates<double> doubleArray(3);

	doubleArray.addEntry();
	doubleArray.print();
	doubleArray.totalValue();


//-----------------------------------------

	// For chars
	Templates<char> charArray(5);

	charArray.addEntry();
	charArray.print();

//------------------------------------------

	// The array can not hold any values of type string.

	system("pause");
	return 0;
}