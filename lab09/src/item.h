#pragma once
#include "product.h"

class Item {
public:
    Item(Product product, int qty);
    
    Product getProduct() const;
    unsigned getQty() const;
    double total() const;

    void setQty(unsigned qty);
private:
    Product product;
    unsigned qty;
};