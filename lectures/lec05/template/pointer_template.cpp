#include <iostream>
#include <functional>

// Template function to compare values, works with pointers too
template <typename T> 
int compare(const T &v1, const T &v2) {
    if (std::less<T>()(v1, v2)) return -1;
    if (std::less<T>()(v2, v1)) return 1;
    return 0;
}

int main() {
    int a = 10, b = 20;
    int result = compare(a, b);
    std::cout << "Compare integers: " << result << std::endl;

    double x = 5.5, y = 5.5;
    std::cout << "Compare doubles: " << compare(x, y) << std::endl;

    int *p1 = &a, *p2 = &b;
    std::cout << "Compare pointers: " << compare(*p1, *p2) << std::endl;

    return 0;
}

