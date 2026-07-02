
# Limit Order Book & Matching Engine

A small C++ matching engine that implements a limit order book with buy/sell sides, price levels, and trade execution.

## Project structure

- `CMakeLists.txt` — build configuration
- `include/` — public headers
- `src/` — implementation source files
- `docs/` — design and architecture notes
- `v1Architecture.md` — high-level architecture diagram

## Build

```powershell
mkdir build
cd build
cmake ..
cmake --build .
```

## Run

From the `build` directory:

```powershell
./limit_order_book
```

## Description

The engine consists of:

- `Exchange` — top-level coordinator
- `MatchingEngine` — order matching logic
- `OrderBook` — buy and sell order book management
- `BookSide` — per-side order book and price levels
- `PriceLevel` — FIFO queue of orders at a given price
- `Trade` — executed trade details

## Notes

- `CMakeLists.txt` builds the executable from the existing source files
- `.gitignore` excludes build outputs, IDE files, and temporary artifacts
