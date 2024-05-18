#include <iostream>
#include <algorithm>
#include "cart.h"

using std::find_if;

Cart::Cart() : discount(NULL)
{
}

void Cart::add(string productName, double unitPrice, unsigned qty)
{
    bool found = false;
    for (auto &p : products) {
        if (p.getName() == productName) {
            p.setQty(p.getQty() + qty);
            return;
        }
    }
    products.push_back(Product(productName, unitPrice, qty));
}

void Cart::set(Discount *discount)
{
    this->discount = discount;
}

double Cart::total()
{
    double sum = 0;
    for (auto p : products)
    {
        sum += p.getQty() * p.getUnitPrice();
    }
    if (discount)
    {
        sum = discount->apply(sum);
    }
    return sum;
}

vector<Product> Cart::getProducts()
{
    return products;
}
