#pragma once

#include <string>
#include <vector>
#include <list>
#include "item.h"
#include "discount.h"

using std::string;
using std::list;

class Cart {
public:
    Cart();
    void add(const Product * product, unsigned qty);
    void set(Discount *discount);
    double total() const;
    list<Item> getItems() const;
private:
    list<Item> items;
    Discount* discount;
};