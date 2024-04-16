#include "standard_account.h"

StandardAccount::StandardAccount(double balance, double tax) : Account(balance), tax(tax)
{
}

bool StandardAccount::withdraw(double amount)
{
    amount += tax;
    return Account::withdraw(amount);
}
