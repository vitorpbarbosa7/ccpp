import ctypes
import numpy as np
import timeit

# Load the C shared library (ensure libmean.so exists in the same directory)
lib = ctypes.CDLL("./libmean.so")  # On Windows, use "./mean.dll"

# Define the C function signature
lib.mean.argtypes = (ctypes.POINTER(ctypes.c_double), ctypes.c_int)
lib.mean.restype = ctypes.c_double

# Test data
arr = np.array([10.0, 20.0, 30.0, 40.0, 50.0], dtype=np.float64)
length = len(arr)

# Convert numpy array to a C array
c_arr = arr.ctypes.data_as(ctypes.POINTER(ctypes.c_double))

# Define a wrapper function for the C mean function
def c_mean():
    return lib.mean(c_arr, length)

# Define a wrapper function for NumPy's mean
def numpy_mean():
    return np.mean(arr)

# Run benchmark using timeit
c_time = timeit.timeit(c_mean, number=1_000_000)
numpy_time = timeit.timeit(numpy_mean, number=1_000_000)

# Print results
print(f"C mean time: {c_time:.6f} seconds")
print(f"NumPy mean time: {numpy_time:.6f} seconds")

# Speedup factor
if numpy_time > 0:
    print(f"Speedup: {numpy_time / c_time:.2f}x")

