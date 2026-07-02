#include <chrono>
#include <iostream>
#include <OrderBook.hpp>

int main() {
    std::cout << "Running benchmark scaffold...\n";
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        // placeholder benchmark workload
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Elapsed (ms): " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << "\n";
    return 0;
}
