#include <iostream>
#include <iomanip>
#include "account.h"
#include "standard_account.h"
#include "atm.h"

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    Account acc1(100);
    StandardAccount acc2(100, 1);
    ATM atm(120);

    bool ok = false;

    ok = atm.withdraw(50, &acc1);
    cout << (ok ? "OK" : "FAIL") << endl; // expect OK
    cout << "$" << atm.check(&acc1) << endl; // expect 50

    ok = atm.withdraw(50, &acc2);
    cout << (ok ? "OK" : "FAIL") << endl; // expect OK
    cout << "$" << atm.check(&acc2) << endl; // expect 49

    ok = atm.withdraw(50, &acc2);
    cout << (ok ? "OK" : "FAIL") << endl; // expect FAIL
    cout << "$" << atm.check(&acc2) << endl; // expect 49
    
    return 0;
}