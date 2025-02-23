import ctypes
import numpy as np
import timeit

# Load the C shared library (make sure it's compiled as libmean.so)
lib = ctypes.CDLL("./libmean.so")  # Use "./mean.dll" on Windows

# Define the C function signature
lib.mean.argtypes = (ctypes.c_double, ctypes.c_double)
lib.mean.restype = ctypes.c_double

# Test values
a, b = 10.0, 20.0

# Define a wrapper function for the C mean function
def c_mean():
    return lib.mean(a, b)

# Define a wrapper function for NumPy's mean
def numpy_mean():
    return np.mean([a, b])

# Run benchmark using timeit
c_time = timeit.timeit(c_mean, number=1_000_000)
numpy_time = timeit.timeit(numpy_mean, number=1_000_000)

# Print results
print(f"C mean time: {c_time:.6f} seconds")
print(f"NumPy mean time: {numpy_time:.6f} seconds")

# Speedup factor
if numpy_time > 0:
    print(f"Speedup: {numpy_time / c_time:.2f}x")

