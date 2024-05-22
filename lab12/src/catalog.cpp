#include "catalog.h"

const Product *Catalog::create(string name, double price)
{
    Product *created = new Product(products.size() + 1, name, price);
    index.emplace(created->getID(), created);
    products.push_back(created);
    return created;
}

const vector<const Product *> &Catalog::list()
{
    return products;
}

const Product *Catalog::get(int id)
{
    auto found = index.find(id);
    if (found == index.end())
    {
        return NULL;
    }
    return found->second;
}

void Catalog::remove(int id)
{
    auto p = get(id);
    if (p == NULL) {
        return;
    }
    for (auto it = products.begin(); it != products.end(); it++) {
        if ((*it) == p) {
            products.erase(it);
            break;
        }
    }
    index.erase(p->getID());
    delete p;
}
