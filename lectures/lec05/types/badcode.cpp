#include <iostream>
#include <cfloat>
#include <iomanip>
#include <limits>  // For numeric limits

int main() {
    // FLOAT TRUNCATION TEST
    double preciseDouble = 1234567.891011123456;  // 18 significant digits
    float truncatedFloat = static_cast<float>(preciseDouble);  // Cast to float

    std::cout << std::setprecision(std::numeric_limits<double>::digits10 + 2);
    std::cout << "Original double (full precision): " << preciseDouble << std::endl;
    std::cout << std::setprecision(std::numeric_limits<float>::digits10 + 2);
    std::cout << "Truncated float: " << truncatedFloat << std::endl;

    // VERIFY LOSS OF PRECISION
    double backToDouble = static_cast<double>(truncatedFloat);
    std::cout << std::setprecision(std::numeric_limits<double>::digits10 + 2);
    std::cout << "Float converted back to double: " << backToDouble << std::endl;

    // INT OVERFLOW TEST
    long bigNumber = 3000000000;  // Larger than INT_MAX
    int truncatedInt = static_cast<int>(bigNumber);

    std::cout << "\nOriginal long: " << bigNumber << std::endl;
    std::cout << "Truncated int (overflow test): " << truncatedInt << std::endl;

    // CHECK LIMITS
    std::cout << "\nInteger range: " << INT_MIN << " to " << INT_MAX << std::endl;
    std::cout << "Float precision: " << FLT_DIG << " digits" << std::endl;
    std::cout << "Double precision: " << DBL_DIG << " digits" << std::endl;

    return 0;
}

