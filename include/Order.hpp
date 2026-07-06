#pragma once

#include<cstdint>

enum class Side{
    BUY,
    SELL
};

class Order {
    private:
    uint64_t orderId;
    double price;
    uint64_t quantity;
    uint64_t filledQuantity;
    Side side;

    public:
    Order(
        uint64_t orderId,
        double price,
        uint64_t quantity,
        Side side
    );

    uint64_t remainingQuantity() const;

    bool isFilled() const;
};