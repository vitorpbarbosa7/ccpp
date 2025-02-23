import ctypes

# Load the shared library
lib = ctypes.CDLL("./libmean.so")  # Use "./mean.dll" on Windows

# Define function argument and return types
lib.mean.argtypes = (ctypes.c_double, ctypes.c_double)
lib.mean.restype = ctypes.c_double

# Call the C function from Python
result = lib.mean(10, 20)
print(f"Mean: {result}")  # Output: Mean: 15.0

