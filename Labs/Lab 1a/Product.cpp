#include "Product.h"
Product::Product()
{}

Product::Product(double price) :netPrice(price)
{}

double Product::getGrossPrice() const
{
	return (netPrice * 1.21);
}