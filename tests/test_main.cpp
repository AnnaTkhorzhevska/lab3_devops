#include <iostream>
#include <cassert>

int add(int a, int b) {
    return a + b;
}

int main() {
    assert(add(2, 3) == 5);  // Перевірка функції add
    std::cout << "Test passed!" << std::endl;
    return 0;
}
