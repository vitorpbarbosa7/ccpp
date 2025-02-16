#include <iostream>

constexpr int square(int x) {
    return x * x;  // Evaluated at compile time
}

int main() {
    constexpr int result = square(5);  // Computed at compile time
	std::cout << result;	
    return 0;
}

