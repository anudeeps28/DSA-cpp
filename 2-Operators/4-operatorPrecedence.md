# Operator Precedence in C++

Operator precedence defines the order in which operators are evaluated in expressions. Below is a **general** list of C++ operators ordered from **highest** to **lowest** precedence. Operators in the same group share the same precedence level and typically have the same associativity (the direction in which an expression is parsed).

> **Note:** Parentheses `()` for grouping override normal precedence by explicitly specifying which parts of an expression should be evaluated first.  

## Highest Precedence to Lowest Precedence

1. **Scope Resolution**
   - **Operators:** `::`
   - **Associativity:** Left-to-right

2. **Postfix Operators**
   - **Operators:** `expr++`, `expr--`, `()`, `[]`, `->`, `.`, `typeid`, `dynamic_cast`, `const_cast`, `reinterpret_cast`
   - **Associativity:** Left-to-right

3. **Prefix (Unary) Operators**
   - **Operators:** `++expr`, `--expr`, unary `+`, unary `-`, logical NOT `!`, bitwise NOT `~`, dereference `*`, address-of `&`, `sizeof`, `new`, `delete`
   - **Associativity:** Right-to-left

4. **Pointer-to-Member Operators**
   - **Operators:** `.*`, `->*`
   - **Associativity:** Left-to-right

5. **Multiplicative**
   - **Operators:** `*`, `/`, `%`
   - **Associativity:** Left-to-right

6. **Additive**
   - **Operators:** `+`, `-`
   - **Associativity:** Left-to-right

7. **Shift**
   - **Operators:** `<<`, `>>`
   - **Associativity:** Left-to-right

8. **Relational**
   - **Operators:** `<`, `>`, `<=`, `>=`
   - **Associativity:** Left-to-right

9. **Equality**
   - **Operators:** `==`, `!=`
   - **Associativity:** Left-to-right

10. **Bitwise AND**
    - **Operators:** `&`
    - **Associativity:** Left-to-right

11. **Bitwise XOR**
    - **Operators:** `^`
    - **Associativity:** Left-to-right

12. **Bitwise OR**
    - **Operators:** `|`
    - **Associativity:** Left-to-right

13. **Logical AND**
    - **Operators:** `&&`
    - **Associativity:** Left-to-right

14. **Logical OR**
    - **Operators:** `||`
    - **Associativity:** Left-to-right

15. **Ternary Conditional**
    - **Operators:** `?:`
    - **Associativity:** Right-to-left

16. **Assignment Operators**
    - **Operators:** `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `^=`, `|=`
    - **Associativity:** Right-to-left

17. **Throw**
    - **Operators:** `throw`
    - **Associativity:** Right-to-left (when used in expressions)

18. **Comma**
    - **Operators:** `,`
    - **Associativity:** Left-to-right

---

## Summary

- **Operators at higher precedence** are evaluated first.  
- **Operators at the same precedence level** are evaluated according to their **associativity** (either left-to-right or right-to-left).  
- **Parentheses `()`** can override these rules by explicitly grouping parts of an expression.  
- Always refer to official C++ references or documentation for the most precise details, as this list is a commonly used summary.