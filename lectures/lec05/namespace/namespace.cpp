include <iostream>

// Define a custom namespace
namespace MathLib {
    int add(int a, int b) {
        return a + b;
    }

    namespace Advanced {
        double power(double base, int exp) {
            double result = 1.0;
            for (int i = 0; i < exp; ++i) {
                result *= base;
            }
            return result;
        }
    }
}

int main() {
    // Accessing the function from MathLib
    std::cout << "Add: " << MathLib::add(5, 3) << std::endl;

    // Accessing the function from nested namespace MathLib::Advanced
    std::cout << "Power: " << MathLib::Advanced::power(2.0, 4) << std::endl;

    return 0;
}

