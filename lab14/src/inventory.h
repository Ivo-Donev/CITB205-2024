#pragma once

#include <map>
#include <stdexcept>
#include <vector>
#include "product.h"
#include "item.h"

using std::exception;
using std::map;
using std::vector;

class OutOfStockException : public exception
{
    virtual const char *what() const noexcept;
};

class Inventory
{
private:
    map<const Product *, unsigned> store;

public:
    void add(const Product *product, unsigned qty);
    vector<Item> getItems();
    Item take(const Product *product, unsigned qty);
};
