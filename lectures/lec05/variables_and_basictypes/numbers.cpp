#include <iostream>
#include <climits>   // Integer limits
#include <cfloat>    // Floating-point limits

int main() {
    // Integer types
    std::cout << "int: " << sizeof(int) << " bytes, Range: " << INT_MIN << " to " << INT_MAX << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes, Range: " << LONG_MIN << " to " << LONG_MAX << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes, Range: " << LLONG_MIN << " to " << LLONG_MAX << std::endl;

    // Floating-point types
    std::cout << "\nfloat: " << sizeof(float) << " bytes, Precision: " << FLT_DIG << " digits, Range: " << FLT_MIN << " to " << FLT_MAX << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes, Precision: " << DBL_DIG << " digits, Range: " << DBL_MIN << " to " << DBL_MAX << std::endl;
    std::cout << "long double: " << sizeof(long double) << " bytes, Precision: " << LDBL_DIG << " digits, Range: " << LDBL_MIN << " to " << LDBL_MAX << std::endl;

    return 0;
}

