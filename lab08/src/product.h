#pragma once
#include <string>

using std::string;

class Product {
public:
    Product(string name, double unitPrice, unsigned qty);
    string getName();
    double getUnitPrice();
    unsigned getQty();
    void setQty(unsigned);
private:
    string name;
    double unitPrice;
    unsigned qty;
};

