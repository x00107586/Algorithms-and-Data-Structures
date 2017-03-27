#include "Software.h"

Software::Software(double price)
{
	netPrice = price;
}

double Software::getGrossPrice() const
{
	return (netPrice * 1.21);
}