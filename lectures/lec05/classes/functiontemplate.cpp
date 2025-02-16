#include <iostream>

// Function template definition
template <class T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int a = 3, b = 7;
    double c = 5.5, d = 1.5;

    std::cout << "Max of integers: " << max(a, b) << std::endl;
    std::cout << "Max of doubles: " << max(c, d) << std::endl;

    return 0;
}
