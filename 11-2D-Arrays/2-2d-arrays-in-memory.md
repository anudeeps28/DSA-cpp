# 📚 How 2-D Arrays Are Stored in Memory (C/C++)

## 🔎 Key Idea
Although 2D arrays *look* like tables (rows and columns), in memory they are stored as a **1D contiguous block** of memory.

---


## 📝 Example in Code

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "Array elements and their addresses:" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j];
            cout << " | Address: " << &arr[i][j] << endl;
        }
    }

    return 0;
}
```

**Expected Output (Addresses will vary):**

```plaintext
arr[0][0] = 1 | Address: 0x7ffee9c6b7b0
arr[0][1] = 2 | Address: 0x7ffee9c6b7b4
arr[0][2] = 3 | Address: 0x7ffee9c6b7b8
arr[1][0] = 4 | Address: 0x7ffee9c6b7bc
arr[1][1] = 5 | Address: 0x7ffee9c6b7c0
arr[1][2] = 6 | Address: 0x7ffee9c6b7c4
```

Notice how the addresses increase sequentially in **row-major order** with a step equal to the size of an `int` (typically 4 bytes).

---


- 2D arrays in C/C++ are stored in **row-major order**.
- The memory layout is **linear and contiguous**.
- Addresses can be calculated using a simple formula.
- You can print actual addresses in C++ to verify how the data is laid out in memory.

## 🏷 Storage Order

### ✅ Row-Major Order (Used in C, C++, Python)
- The **entire first row** is stored first.
- Then the **second row**, and so on.

**Memory layout example for `arr[2][3]` :**
`Row 0:  [1] [2] [3]`
`Row 1:  [4] [5] [6]`

### 🔎 Column-Major Order (Used in Fortran, MATLAB)
- The **entire first column** is stored first, then the second column, etc.
---

