#pragma once
#include <string>

using std::string;

class Product {
public:
    Product(string name, double unitPrice);
    string getName() const;
    double getUnitPrice() const;
    bool operator==(const Product &o);
private:
    string name;
    double unitPrice;
};

