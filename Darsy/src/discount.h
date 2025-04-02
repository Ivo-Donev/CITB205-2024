#pragma once

class Discount {
public:
    virtual double apply(double sum) = 0;
};

class FlatDiscount : public Discount {
public:
    FlatDiscount(double amount);
    double apply(double sum);
private:
    double amount;
};

class PercentageDiscount : public Discount {
public:
    PercentageDiscount(int percentage);
    double apply(double sum);
private:
    int percentage;
};