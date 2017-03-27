// Michael Smith x00107586
#pragma once

//  Q3. The requirement for any type used in this class is that the instances must be able to be compared against
//      each other and find the min,max and median. This is possible with types like ints, doubles, chars but not with strings.

//  Q5.	The reason you cant seperate the definitions and the declarations is because of the template.
//		When the program is ran the compiler creates a new class of whatever type has been instantiated by the object.
//		When a new object is created its type is changed for instance it can be an int or a double.
//		Because of this the compiler needs to have quick access to the methods to change the type to the data type being used.
//		The methods would not be accessible outside the header file so they would not be able to be instantiated.

//  Q6. One way to work around this is to simply put the definitions in the h file.

template<typename T>
class Triple
{
public:
	Triple();
	Triple(T el1, T el2, T el3);
	T maximum();
	T minimum();
	T median();

protected:
	T firstElement;
	T secondElement;
	T thirdElement;
};

template<typename T>
Triple<T>::Triple()
{}

template<typename T>
Triple<T>::Triple(T el1, T el2, T el3)
{
	firstElement = el1;
	secondElement = el2;
	thirdElement = el3;
}

template<typename T>
T Triple<T>::maximum()
{
	T max = firstElement;
	if (secondElement > firstElement && secondElement > thirdElement)
	{
		max = secondElement;
	}
	else if (thirdElement > firstElement && thirdElement > secondElement)
	{
		max = thirdElement;
	}
	else
	{
		max = firstElement;
	}
	return max;
}

template<typename T>
T Triple<T>::minimum()
{
	T min = firstElement;
	if (secondElement < firstElement && secondElement < thirdElement)
	{
		min = secondElement;
	}
	else if (thirdElement < firstElement && thirdElement < secondElement)
	{
		min = thirdElement;
	}
	else
	{
		min = firstElement;
	}
	return min;
}

template<typename T>
T Triple<T>::median()
{
	T median = firstElement;
	if ((firstElement > secondElement && firstElement < thirdElement) || (firstElement < secondElement && firstElement > thirdElement))
	{
		median = firstElement;
	}
	else if ((secondElement > firstElement && secondElement < thirdElement) || (secondElement < firstElement && secondElement > thirdElement))
	{
		median = secondElement;
	}
	else
	{
		median = thirdElement;
	}
	return median;
}