#include <iostream>
#include <iomanip>
#include <set>
#include "cart.h"
#include "discount.h"

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    // TODO: Define an Inventory class that holds products with quantities
    // TODO: Load the inventory with products
    // TODO: Add items to the cart, taking them from the inventory (reducing the inventory quantities)

    Cart cart;
    Product apple("Apple", 1.50);
    Product melon("Melon", 3.90);

    cart.add(apple, 4);
    cart.add(melon, 1);
    cart.add(melon, 1);

    cout << "$" << cart.total() << endl;

    FlatDiscount off5(5);
    cart.set(&off5);

    cout << "$" << cart.total() << endl;
    for (auto it : cart.getItems())
    {
        cout << it.getProduct().getName() << " " << it.getQty() << "x" << it.getProduct().getUnitPrice() << " = " << it.total() << endl;
    }

    return 0;
}