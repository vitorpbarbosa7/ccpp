The slides are explaining **type casting in C and C++**, focusing on the different types of casting mechanisms and their impact on class hierarchies.

### **Key Takeaways:**

#### **1. C-Style Casting (Dangerous & Unsafe)**
- In **C**, casting is done by explicitly specifying the type in parentheses, e.g.:
  ```c
  char *buf = (char *)malloc(128);
  float b = 98.6;
  int a = (int)b;  // Truncates 98.6 to 98
  ```
- **Problem:** It does not check whether the cast is valid, leading to possible undefined behavior.

#### **2. C++-Style Casting**
- C++ introduces **stronger and safer** casting mechanisms:
  - `static_cast`
  - `dynamic_cast`
  - `reinterpret_cast`
  - `const_cast`

#### **3. Type Casting in Inheritance (C-Style vs C++-Style)**
##### **Unsafe Downcasting Example:**
```cpp
class Cat { };
class Tiger : public Cat { };
class Persian : public Cat { };

Cat *c = new Persian;
Tiger *t = (Tiger *)c; // ⚠️ Wrong! Persian is not a Tiger.
```
- **Why is this wrong?** `c` is actually a `Persian`, not a `Tiger`, so treating it as a `Tiger` leads to undefined behavior.

---

### **Difference Between `static_cast` and `dynamic_cast`**
#### **✅ `static_cast<>` (Compile-Time Cast)**
- Used for **converting related types** (e.g., upcasting, basic type conversions).
- **No runtime check** is performed.
- Works with both **pointers and references**.
- **Faster but unsafe**: It does not check if the cast is valid at runtime.

**Example:**
```cpp
Tiger *t = new Tiger;
Cat *c1 = (Cat *)t;  // C-style cast (Unsafe)
Cat *c2 = static_cast<Cat *>(t); // Safe upcast (Tiger → Cat)
```

---

#### **✅ `dynamic_cast<>` (Runtime Checked Cast)**
- Used when **converting between polymorphic types** (i.e., classes with `virtual` functions).
- **Runtime type checking** using RTTI (Run-Time Type Information).
- Works **only with pointers or references**.
- **Safer but slower** because it checks the actual object type.

**Example:**
```cpp
Cat *c = new Tiger; // Upcasting is fine
Tiger *t1 = (Tiger *)c; // C-style cast (Unsafe)
Tiger *t2 = static_cast<Tiger *>(c); // Still unsafe if c is not actually a Tiger
Tiger *t3 = dynamic_cast<Tiger *>(c); // ✅ Safe (will return nullptr if c is not a Tiger)
```

- If the cast **fails**, `dynamic_cast<>` returns:
  - `nullptr` for pointers.
  - Throws `std::bad_cast` exception for references.

---

### **Why Does Downcasting Fail?**
- **Downcasting** (casting `Cat*` to `Tiger*`) is **unsafe** unless we are sure that the object is actually a `Tiger`.
- `dynamic_cast<>` ensures the conversion is valid at runtime.

**Example of failing downcast:**
```cpp
Cat *c = new Persian; // Persian is a Cat
Tiger *t = dynamic_cast<Tiger *>(c); // ❌ Returns nullptr (c is NOT a Tiger)
```
---

### **Summary**
| Cast Type        | Compile-Time | Runtime Check | Safe? | Usage |
|-----------------|-------------|--------------|------|------|
| `(Type *)` (C-style) | ✅ | ❌ | ❌ Dangerous | Used in C, allows any conversion |
| `static_cast<>` | ✅ | ❌ | ⚠️ Unsafe for downcasts | Used for upcasts, basic conversions |
| `dynamic_cast<>` | ❌ | ✅ | ✅ Safe | Used for polymorphic types to check at runtime |

- Use **`static_cast<>`** for **safe upcasting**.
- Use **`dynamic_cast<>`** when **checking object types at runtime**.
- **Avoid C-style casts in C++** because they allow invalid conversions.

Would you like an example with `dynamic_cast<>` and `static_cast<>` showing runtime behavior?
