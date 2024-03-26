#include <iostream>
#include <iomanip>
#include "cart.h"

using namespace std;

int main() {
    Cart cart;
    cart.add("Apple", 1.50, 2);
    cart.add("Melon", 3.90, 1);
    cout << "$" << fixed << setprecision(2) << cart.total() << endl;
    return 0;
}