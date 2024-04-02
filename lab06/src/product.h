#pragma once
#include <string>

using std::string;

class Product {
public:
    Product(string name, double unitPrice, unsigned qty);
    double getUnitPrice();
    unsigned getQty();
private:
    string name;
    double unitPrice;
    unsigned qty;
};