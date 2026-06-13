#include <iostream>
#include <optional>

int main() {
    std::optional<int> maybe = 42;
    if (maybe) {
        std::cout << "C++17 works: " << *maybe << std::endl;
    }
    return 0;
}