### **🔹 Why This Error?**
You're missing **linking with Python's shared library (`libpython3.9`)**.

The error:
```
Undefined symbols for architecture arm64:
  "_PyArg_ParseTuple", referenced from:
      _mean in mean_module-9f1a64.o
  "_PyModule_Create2", referenced from:
      _PyInit_mean in mean_module-9f1a64.o
  "_Py_BuildValue", referenced from:
      _mean in mean_module-9f1a64.o
```
This means the **Python C API symbols are missing**, because `gcc` doesn’t automatically link against Python's shared library.

---

### **🔹 Solution: Add `-lpython3.9` When Compiling**
You need to **explicitly link against Python's shared library**.

#### ✅ **Find the Python 3.9 Library Path**
Run:
```sh
python3-config --ldflags
```
You should see output like:
```
-L/Library/Developer/CommandLineTools/Library/Frameworks/Python3.framework/Versions/3.9/lib -lpython3.9
```
This tells you where `libpython3.9` is located.

#### ✅ **Compile the C Extension Correctly**
Now, compile with proper **include and library linking**:
```sh
gcc -shared -o mean.so -fPIC \
    -I/Library/Developer/CommandLineTools/Library/Frameworks/Python3.framework/Versions/3.9/include/python3.9 \
    -L/Library/Developer/CommandLineTools/Library/Frameworks/Python3.framework/Versions/3.9/lib -lpython3.9 \
    mean_module.c
```

---

### **🔹 Alternative: Use `python3-config`**
Instead of manually specifying paths, use `python3-config`:
```sh
gcc -shared -o mean.so -fPIC \
    $(python3-config --cflags) \
    $(python3-config --ldflags) \
    mean_module.c
```
This is **the recommended way**, as it ensures compatibility.

---

### **🔹 Final Check**
If you still get errors, verify that `libpython3.9.dylib` exists:
```sh
ls -l /Library/Developer/CommandLineTools/Library/Frameworks/Python3.framework/Versions/3.9/lib/
```
Look for a file like:
```
libpython3.9.dylib
```
If it’s missing, your Python installation might be incomplete.

---

🔥 **Try this and let me know if it works!** 🚀
