#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    for (auto n : nums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}

