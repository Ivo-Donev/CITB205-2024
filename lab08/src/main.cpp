#include <iostream>
#include <iomanip>
#include "cart.h"
#include "discount.h"

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    Cart cart;
    cart.add("Apple", 1.50, 4);
    cart.add("Melon", 3.90, 1);
    cart.add("Melon", 3.90, 1);

    cout << "$" << cart.total() << endl;

    PercentageDiscount off5(5);
    cart.set(&off5);

    cout << "$" << cart.total() << endl;
    for (auto p : cart.getProducts())
    {
        cout << p.getName() << " " << p.getQty() << "x" << p.getUnitPrice() << " = " << p.getQty() * p.getUnitPrice() << endl;
    }

    return 0;
}