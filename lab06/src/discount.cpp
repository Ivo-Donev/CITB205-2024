#include "discount.h"

FlatDiscount::FlatDiscount(double amount) : amount(amount)
{
}

double FlatDiscount::apply(double sum)
{
    return sum - amount;
}

PercentageDiscount::PercentageDiscount(int percentage) : percentage(percentage)
{
}

double PercentageDiscount::apply(double sum)
{
    return sum * (1-percentage/100.0);
}
