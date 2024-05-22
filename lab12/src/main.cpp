#include <iostream>
#include <iomanip>
#include <set>
#include "cart.h"
#include "discount.h"
#include "inventory.h"
#include "item.h"
#include "catalog.h"

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    Catalog catalog;
    auto apple = catalog.create("Apple", 1.50);
    auto melon = catalog.create("Melon", 3.90);

    Inventory inv;
    inv.add(apple, 2);
    inv.add(melon, 1);
    inv.add(melon, 2);

    Cart cart;
    auto it1 = inv.take(apple, 2);
    if (!it1.getQty()) {
        cout << "ERROR: insufficient quantity of " << it1.getProduct()->getName() << endl;
        return 0;
    }
    cart.add(it1.getProduct(), it1.getQty());

    auto it2 = inv.take(melon, 1);
    if (!it2.getQty()) {
        cout << "ERROR: insufficient quantity of " << it1.getProduct()->getName() << endl;
        return 0;
    }
    cart.add(it2.getProduct(), it2.getQty());

    cout << "--------------" << endl;
    cout << "Total (before discount): $" << cart.total() << endl;
    FlatDiscount off5(5);
    cart.set(&off5);
    cout << "Total (after discount): $" << cart.total() << endl;
    for (auto it : cart.getItems())
    {
        cout << it.getProduct()->getName() << " " << it.getQty() << "x" << it.getProduct()->getUnitPrice() << " | " << it.total() << endl;
    }
    cout << "--------------" << endl;

    cout << "Left in stock" << endl; 
    for (auto it : inv.getItems())
    {
        cout << it.getProduct()->getName() << " x" << it.getQty() << endl;
    }

    return 0;
}