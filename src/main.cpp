#include<iostream>
#include "Order.hpp"

using namespace std;
int main() {
    Order order1(1, 100.00, 50, Side::BUY);

    cout<<order1.remainingQuantity()<<endl;

    cout<<order1.isFilled()<<endl;
}