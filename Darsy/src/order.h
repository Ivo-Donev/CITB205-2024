#pragma once

class PercentageDiscount; // Forward declaration if needed

class Order {
public:
    void add(const PercentageDiscount &discount);
};
