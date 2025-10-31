#include <iostream>
#include "../include/bib.hpp"

// NOVA FUNÇÃO DE TESTE para somarNumeros
void test_somarNumeros(int a, int b, int expected) {
    int result = somarNumeros(a, b);
    if (result == expected) {
        std::cout << "TEST PASS: Soma de " << a << " + " << b << " = " << result << std::endl;
    } else {
        std::cout << "TEST FAIL: Soma de " << a << " + " << b << " deveria ser " << expected << ", mas foi " << result << std::endl;
    }
}

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

    // Testes da Funcionalidade 1 (Garantia de Regressão)
    test_calcularFatorial(5, 120);
    test_calcularFatorial(0, 1);
    // NOVOS TESTES para a Funcionalidade 2 (DEVE FALHAR na primeira tentativa)
    test_somarNumeros(2, 3, 5);
    test_somarNumeros(10, -5, 5);

    return 0;
}
