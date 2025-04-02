#include <iostream>
#include "cart.h"

Cart::Cart() : discount(NULL)
{
}

void Cart::add(string productName, double unitPrice, unsigned qty)
{
    products.push_back(Product(productName, unitPrice, qty));
}

void Cart::set(Discount *discount)
{
    this->discount = discount;
}

double Cart::total()
{
    double sum = 0;
    for (auto p : products) {
        sum += p.getQty() * p.getUnitPrice();
    }
    if (discount) {
        sum = discount->apply(sum);
    }
    return sum;
}