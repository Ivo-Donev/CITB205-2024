#pragma once

#include <string>
#include <vector>
#include "product.h"
#include "discount.h"

using std::string;
using std::vector;

class Cart {
public:
    Cart();
    void add(string productName, double unitPrice, unsigned qty);
    void set(Discount *discount);
    double total();
    vector<Product> getProducts();
private:
    vector<Product> products;
    Discount* discount;
};