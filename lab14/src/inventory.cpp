#include "inventory.h"

void Inventory::add(const Product * product, unsigned qty)
{
    auto ins = store.emplace(product, qty);
    if (!ins.second) {
        auto existingItem = ins.first;
        existingItem->second += qty;
    }
}

vector<Item> Inventory::getItems()
{
    vector<Item> items;
    for (auto it : store)
    {
        items.push_back(Item(it.first, it.second));
    }
    return items;
}

Item Inventory::take(const Product * product, unsigned qty)
{
    auto it = store.find(product);
    if (it == store.end() || it->second < qty) {
        throw OutOfStockException();
    }
    it->second -= qty;
    if (it->second == 0) {
        store.erase(it);
    }
    return Item(product, qty);
}

const char *OutOfStockException::what() const noexcept
{
    return "Not enough items in stock";
}