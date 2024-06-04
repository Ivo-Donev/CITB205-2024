#pragma once
#include <vector>
#include <map>
#include "product.h"

using std::vector;
using std::map;

class Catalog
{
private:
    vector<const Product *> products;
    map<int, const Product *> index;
public:
    Catalog();
    Catalog(const Catalog &o);
    ~Catalog();
    const Product * create(string name, double price);
    const vector<const Product *> & list() const;
    const Product * get(int id) const;
    void remove(int id);
    void operator=(const Catalog &o) = delete;
};
