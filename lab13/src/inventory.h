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
    map<const Product*, unsigned> store;

public:
    void add(const Product * product, unsigned qty);
    vector<Item> getItems();
    Item take(const Product * product, unsigned qty);
};
