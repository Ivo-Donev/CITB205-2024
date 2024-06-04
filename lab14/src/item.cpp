#include "item.h"

Item::Item(const Product * product, int qty) : product(product), qty(qty)
{
}

const Product * Item::getProduct() const
{
    return product;
}

unsigned Item::getQty() const
{
    return qty;
}

double Item::total() const
{
    return product->getUnitPrice()*qty;
}

void Item::setQty(unsigned qty)
{
    this->qty = qty;
}
