#include <iostream>
#include <algorithm>
#include "cart.h"

using std::find_if;

Cart::Cart() : discount(NULL)
{
}

void Cart::add(const Product * product, unsigned qty)
{
    // TODO: Optimise using STL to avoid iterating over the entire collection
    bool found = false;
    for (auto &it : items) {
        if (it.getProduct() == product) {
            it.setQty(it.getQty() + qty);
            return;
        }
    }
    items.push_back(Item(product, qty));
}

void Cart::set(Discount *discount)
{
    this->discount = discount;
}

double Cart::total() const
{
    double sum = 0;
    for (auto it : items)
    {
        sum += it.total();
    }
    if (discount)
    {
        sum = discount->apply(sum);
    }
    return sum;
}

list<Item> Cart::getItems() const
{
    return items;
}
