#include "product.h"

Product::Product(string name, double unitPrice, unsigned qty) : name(name), unitPrice(unitPrice), qty(qty)
{
}

double Product::getUnitPrice()
{
    return unitPrice;
}

unsigned Product::getQty()
{
    return qty;
}
