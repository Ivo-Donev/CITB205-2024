#include "product.h"
#include <iostream>

Product::Product(string name, double unitPrice) : name(name), unitPrice(unitPrice)
{
}

Product::Product(const Product &o) : name(o.name), unitPrice(o.unitPrice)
{
    std::cerr << "COPY PRODUCT" << std::endl;
}

double Product::getUnitPrice() const
{
    return unitPrice;
}

string Product::getName() const
{
    return name;
}

bool Product::operator<(const Product &o) const
{
    return this->name < o.name;
}

bool Product::operator==(const Product &o) const
{
    return this->name == o.name;
}
