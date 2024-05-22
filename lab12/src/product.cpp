#include "product.h"
#include <iostream>

Product::Product(int id, string name, double unitPrice) : id(id), name(name), unitPrice(unitPrice)
{
}

Product::Product(const Product &o) : Product(o.id, o.name, o.unitPrice)
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

int Product::getID() const
{
    return id;
}

bool Product::operator<(const Product &o) const
{
    return this->name < o.name;
}

bool Product::operator==(const Product &o) const
{
    return this->name == o.name;
}
