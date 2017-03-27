#include "Book.h"

Book::Book(double price)
{
	netPrice = price;
}

double Book::getGrossPrice() const
{
	return netPrice;
}