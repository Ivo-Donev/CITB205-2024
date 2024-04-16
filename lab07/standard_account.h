#pragma once

#include "account.h"

class StandardAccount : public Account {
public:
    StandardAccount(double balance, double tax);
    bool withdraw(double amount);
private:
    double tax;
};