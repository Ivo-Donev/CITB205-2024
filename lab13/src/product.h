#pragma once
#include <string>

using std::string;

class Product {
public:
    Product(int id, string name, double unitPrice);
    Product(const Product &p);
    int getID() const;
    string getName() const;
    double getUnitPrice() const;
    bool operator==(const Product &o) const;
    bool operator<(const Product &o) const;
private:
    int id;
    string name;
    double unitPrice;
};

