#pragma once
#include <iostream>

class Product
{
public:
	Product();
	Product(double);
	virtual double getGrossPrice() const;

protected:
	double netPrice;
};
