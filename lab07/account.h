#pragma once

class Account {
public:
    Account(double balance);
    virtual bool withdraw(double amount);
    double getBalance();
private:
    double balance;
};