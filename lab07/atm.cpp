#include "atm.h"

ATM::ATM(double available) : available(available)
{
}

bool ATM::withdraw(double amount, Account *acc)
{
    if (available < amount) {
        return false;
    }
    if (acc->withdraw(amount)) {
        available -= amount;
        return true;
    } else {
        return false;
    }
}

double ATM::check(Account *acc)
{
    return acc->getBalance();
}
