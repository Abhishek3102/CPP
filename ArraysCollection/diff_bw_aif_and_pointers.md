

## 🟩 **Key Difference: Use of Pointers and Dynamic Memory**

| Feature            | **First Code (`prepareChaiOrders`)**                    | **Second Code (`chaiServed`)**          |
| ------------------ | ------------------------------------------------------- | --------------------------------------- |
| Array allocation   | Done dynamically using `new`                            | Done statically with a fixed-size array |
| Memory location    | Allocated on the **heap**                               | Allocated on the **stack**              |
| Use of pointer     | Returns `int*` (pointer to dynamically allocated array) | Uses regular array (no dynamic pointer) |
| Lifetime of data   | Persists until you manually `delete[]` it               | Automatically freed when function ends  |
| Flexibility (size) | Can allocate size at runtime (`cups`)                   | Size must be known at compile time      |

---

## 🧠 What the Pointer Actually Changes:

### 1. **Memory is allocated on the heap**

* `int *orders = new int[cups];`
* This lets the program allocate memory **at runtime** for any number of chai cups.
* In contrast, the second example allocates a fixed-size array on the stack.

### 2. **Function can return a pointer to that array**

* You **can't return** a local stack array from a function — it would be destroyed after the function ends.
* But with dynamic allocation, you can safely return a pointer to the heap memory.

### 3. **Manual memory management required**

* In the first code, you should ideally call `delete[] chaiOrder;` at the end of `main()` to prevent memory leaks.
* The second code doesn't require that — the stack memory is automatically cleaned up.

### 4. **More flexibility at runtime**

* First code lets you decide how many cups at runtime (`int cups = 4;`).
* Second code is hardcoded: `int chaiServed[7];` — size must be known ahead of time.

---

### 🧾 Summary:

* **Pointer brings dynamic memory allocation** (heap), flexibility, and function-safe return of arrays.
* **Stack array is faster and simpler**, but less flexible (fixed size, limited scope).
* Pointer use adds power but also **requires careful memory management**.

