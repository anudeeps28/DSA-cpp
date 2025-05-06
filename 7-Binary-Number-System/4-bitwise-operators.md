# Bitwise Operators: AND, OR, and NOT

Bitwise operators perform operations on the individual bits of integer values. They are commonly used in low-level programming, bit manipulation, embedded systems, and performance-critical code.

---

## Bitwise AND (`&`)

- **Operation:**  
  Compares each bit of two numbers and returns a new number whose bits are set to 1 **only if** the corresponding bits of both operands are 1.

- **Truth Table:**
  | Bit A | Bit B | A & B |
  |:-----:|:-----:|:-----:|
  |   0   |   0   |   0   |
  |   0   |   1    |   0   |
  |   1    |   0   |   0   |
|   1    |   1    |   1   |

- **Example:**
  - Consider the integers `5` and `3`.
  - Binary representation:  
    `5` → `0101`  
    `3` → `0011`
  - Bitwise AND:  
    ```
    0101
    0011
    ----
    0001  (which is 1 in decimal)
    ```

---

## Bitwise OR (`|`)

- **Operation:**  
  Compares each bit of two numbers and returns a new number whose bits are set to 1 if **either** corresponding bit of the operands is 1 (or if both are 1).

- **Truth Table:**
  | Bit A | Bit B | A \| B |
  |:-----:|:-----:|:------:|
  |   0   |   0   |   0    |
  |   0   |   1   |   1    |
  |   1   |   0   |   1    |
  |   1   |   1   |   1    |

- **Example:**
  - Using the same integers, `5` and `3`:
  - Binary representation:  
    `5` → `0101`  
    `3` → `0011`
  - Bitwise OR:  
    ```
    0101
    0011
    ----
    0111  (which is 7 in decimal)
    ```

---

## Bitwise NOT (`~`)

- **Operation:**  
  A unary operator that inverts every bit of its operand.  
  Every 0 becomes a 1 and every 1 becomes a 0.

- **Example:**
  - Consider the integer `5`:
  - Binary representation (for 4 bits):  
    `5` → `0101`
  - Bitwise NOT:  
    ```
    ~0101 → 1010  
    ```
  - Note:  
    The result depends on the number of bits used to represent the number (i.e., the width of the data type). In many programming languages, integers are represented with more than 4 bits (typically 32 or 64 bits), and the bitwise NOT will invert all those bits. This is particularly important because it can affect the sign of the number, especially with two's complement representation.

---

## Summary

- **Bitwise AND (`&`):**  
  Produces a 1 in each bit position where both input bits are 1.

- **Bitwise OR (`|`):**  
  Produces a 1 in each bit position where at least one of the input bits is 1.

- **Bitwise NOT (`~`):**  
  Inverts every bit of the operand.

These operators are efficient tools for manipulating data at the bit level, useful for tasks like setting, clearing, toggling bits, and performing low-level programming operations.