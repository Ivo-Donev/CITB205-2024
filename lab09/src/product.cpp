#include "product.h"

Product::Product(string name, double unitPrice) : name(name), unitPrice(unitPrice)
{
}

double Product::getUnitPrice() const
{
    return unitPrice;
}

bool Product::operator==(const Product &o)
{
    return this->name == o.name;
}

string Product::getName() const
{
    return name;
}

