#include "product.h"

Product::Product(string name, double unitPrice) : name(name), unitPrice(unitPrice)
{
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
