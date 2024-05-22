#include <iostream>
#include <iomanip>
#include <set>
#include "cart.h"
#include "discount.h"
#include "inventory.h"
#include "item.h"
#include "catalog.h"

using namespace std;

// TODO: Model the remaining root command as classes that has hold pointers to the respective Catalog, Inventory and Cart objects.
// Use CatalogCommand as an example

class CatalogCommand
{
public:
    CatalogCommand(Catalog *catalog) : catalog(catalog)
    {
    }
    void execute(string cmd)
    {
        if (cmd == "add")
        {
            string name;
            double unitPrice;
            cin >> name >> unitPrice;
            auto p = catalog->create(name, unitPrice);
            cout << "Created " << p->getName() << " with ID #" << p->getID() << endl;
        }
        else
        {
            cout << "Please enter a valid catalog command!" << endl;
        }
        // TODO: add command for removing a product from the catalog
    }

private:
    Catalog *catalog;
};

void runInventoryCmd(Inventory &inv, const Catalog &catalog, const string &cmd)
{
    if (cmd == "add")
    {
        int id;
        unsigned qty;
        cin >> id >> qty;
        auto prod = catalog.get(id);
        if (prod == NULL)
        {
            cout << "Please enter a valid product ID!" << endl;
            return;
        }
        inv.add(prod, qty);
    }
    else if (cmd == "list")
    {
        cout << "In stock:" << endl;
        for (auto it : inv.getItems())
        {
            cout << it.getProduct()->getName() << " | " << it.getQty() << endl;
        }
        cout << "--------" << endl;
    }
    else
    {
        cout << "Please enter a valid inventory command!" << endl;
    }
}

void runCartCmd(Cart *cart, const Catalog &catalog, Inventory &inv, const string &cmd)
{
    if (cmd == "add")
    {
        int id;
        unsigned qty;
        cin >> id >> qty;
        auto prod = catalog.get(id);
        if (prod == NULL)
        {
            cout << "Please enter a valid product ID!" << endl;
            return;
        }
        auto it = inv.take(prod, qty);
        if (it.getQty() == 0)
        {
            cout << "Not enough stock of " << prod->getName() << endl;
            return;
        }
        cart->add(it.getProduct(), it.getQty());
    }
    else if (cmd == "print")
    {
        cout << "Receipt:" << endl;
        for (auto it : cart->getItems())
        {
            cout << it.getProduct()->getName() << " | " << it.getProduct()->getUnitPrice() << "  | " << it.getQty() << endl;
        }
        cout << "Total: $" << cart->total() << endl;
        cout << "--------" << endl;
        // cart object must be deleated and a *new* object created after print
    }
    else
    {
        cout << "Please enter a valid catalog command!" << endl;
    }
    // TODO: add command for setting a flat discount
    // TODO: add command for setting a percentage discount

}

int main()
{
    cout << fixed << setprecision(2);

    Catalog catalog;
    Inventory inventory;
    Cart *cart = new Cart();

    string rootCmd, subCmd;
    CatalogCommand catalogCmd(&catalog);
    while (cin >> rootCmd >> subCmd)
    {
        if (rootCmd == "catalog")
        {
            catalogCmd.execute(subCmd);
        }
        else if (rootCmd == "inventory")
        {
            runInventoryCmd(inventory, catalog, subCmd);
        }
        else if (rootCmd == "cart")
        {
            runCartCmd(cart, catalog, inventory, subCmd);
        }
        else
        {
            cout << "Please enter a valid command!" << endl;
        }
    }

    return 0;
}