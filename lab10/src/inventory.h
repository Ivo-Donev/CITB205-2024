#pragma once

#include <map>
#include <vector>
#include "product.h"
#include "item.h"

using std::map;
using std::vector;

class Inventory
{
private:
    map<Product, unsigned> store;

public:
    void add(Product product, unsigned qty);
    vector<Item> getItems();
    Item take(Product product, unsigned qty);
};
