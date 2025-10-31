#include <iostream>
#include "../include/bib.hpp"

void test_calcularFatorial(int input, int expected) {
    int result = calcularFatorial(input);
    if (result == expected) {
        std::cout << "TEST PASS: Fatorial de " << input << " = " << result << std::endl;
    } else {
        std::cout << "TEST FAIL: Fatorial de " << input << " deveria ser " << expected << ", mas foi " << result << std::endl;
    }
}

int main() {
    std::cout << "--- TESTES DE REGRESSÃO ---" << std::endl;
    test_calcularFatorial(5, 120); // 5! = 120
    test_calcularFatorial(0, 1);  // 0! = 1
    return 0;
}
