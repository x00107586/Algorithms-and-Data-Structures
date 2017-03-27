#pragma once
#include <iostream>
#include "Product.h"

class Software : public Product
{
public:
	Software(double);
	double getGrossPrice() const;
};