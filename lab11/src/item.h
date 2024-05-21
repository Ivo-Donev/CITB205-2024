#pragma once
#include "product.h"

class Item {
public:
    Item(const Product & product, int qty);
    
    const Product & getProduct() const;
    unsigned getQty() const;
    double total() const;

    void setQty(unsigned qty);
private:
    Product product;
    unsigned qty;
};