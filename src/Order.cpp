#include "Order.hpp"

Order::Order(
    uint64_t orderId,
    double price,
    uint64_t quantity,
    Side side
)
    : orderId(orderId),
      price(price),
      quantity(quantity),
      filledQuantity(0),
      side(side)
{

}      

uint64_t Order::remainingQuantity() const {
    return quantity - filledQuantity;
}

bool Order::isFilled() const {
    return remainingQuantity()==0;
}