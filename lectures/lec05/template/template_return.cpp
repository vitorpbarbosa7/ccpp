#include <iostream>
// Template function with same type for return type and parameter
template <typename T>

// Here I define my function
// Type generic T as return type
// pointer to T as input type
T foo(T* p) {
    // dereference go get the value of p
    T tmp = *p;
    return tmp;
}

int main() {
    int x = 42;
    int* ptr = &x;
    
    int result = foo(ptr);
    std::cout << "Result: " << result << std::endl;

    float y = 3.14f;
    float* ptrf = &y;

    float resultf = foo(ptrf);
    std::cout << "Result float :" << resultf << std::endl;

    return 0;
}

