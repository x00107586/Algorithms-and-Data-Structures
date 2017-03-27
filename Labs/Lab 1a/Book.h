#pragma once
#include <iostream>
#include "Product.h"

class Book : public Product
{
public:
	Book(double);
	double getGrossPrice() const;
};
