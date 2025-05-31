#include "Project7.h"
#include <iostream>
#include <limits>
#include <stdexcept>

int safe_add(long long a, long long b) {
    if ((a + b) > std::numeric_limits<int>::max() || (a + b) < std::numeric_limits<int>::min()) {
        throw std::overflow_error("Addition overflow!");
    }
    return static_cast<int>(a + b);
}

void run_addition() {
    long long a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    try {
        int result = safe_add(a, b);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::overflow_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        std::cerr << "Input numbers: " << a << " and " << b << std::endl;
    }
}
