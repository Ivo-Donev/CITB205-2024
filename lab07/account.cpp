#include "account.h"

Account::Account(double balance) : balance(balance)
{
}

bool Account::withdraw(double amount)
{
    if (balance < amount) {
        return false;
    }
    balance -= amount;
    return true;
}

double Account::getBalance()
{
    return balance;
}
