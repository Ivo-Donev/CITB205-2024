#pragma once

#include "account.h"

class ATM {
public:
    ATM(double available);
    bool withdraw(double amount, Account *acc);
    double check(Account *acc);
private:
    double available;
};