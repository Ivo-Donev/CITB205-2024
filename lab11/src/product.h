#pragma once
#include <string>

using std::string;

class Product {
public:
    Product(string name, double unitPrice);
    Product(const Product &p);
    string getName() const;
    double getUnitPrice() const;
    bool operator==(const Product &o) const;
    bool operator<(const Product &o) const;
private:
    string name;
    double unitPrice;
};

