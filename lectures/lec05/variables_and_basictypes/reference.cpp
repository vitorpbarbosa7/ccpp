#include <iostream>

int main() {
    int ival = 1024;        // An integer variable
    int &refVal = ival;     // A reference to ival (alias)

    std::cout << "ival: " << ival << std::endl;
    std::cout << "refVal: " << refVal << std::endl;

    refVal = 2048;          // Changing refVal also changes ival
    std::cout << "\nAfter changing refVal:\n";
    std::cout << "ival: " << ival << std::endl;
    std::cout << "refVal: " << refVal << std::endl;

    // int &refVal2;  // ERROR: A reference must be initialized when declared

    return 0;
}

