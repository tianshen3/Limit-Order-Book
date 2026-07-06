cmake_minimum_required(VERSION 3.15)

project(
    LimitOrderBookMatchingEngine
    VERSION 1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

# Sources
set(ORDERBOOK_SOURCES
    ...
)

# Headers
set(ORDERBOOK_HEADERS
    ...
)

add_library(orderbook_lib STATIC
    ${ORDERBOOK_SOURCES}
    ${ORDERBOOK_HEADERS}
)

target_include_directories(orderbook_lib
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_options(orderbook_lib PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)

add_executable(limit_order_book src/main.cpp)
target_link_libraries(limit_order_book PRIVATE orderbook_lib)

add_executable(orderbook_tests tests/test_orderbook.cpp)
target_link_libraries(orderbook_tests PRIVATE orderbook_lib)
add_test(NAME OrderBookTests COMMAND orderbook_tests)

add_executable(orderbook_benchmarks benchmarks/benchmark_orderbook.cpp)
target_link_libraries(orderbook_benchmarks PRIVATE orderbook_lib)