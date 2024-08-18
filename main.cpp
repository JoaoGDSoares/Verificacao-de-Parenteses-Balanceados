#include "balance_checker.h"

int main() {
    std::string expressao;

    // Recebe a expressão do usuário
    std::cout << "Digite a expressao: ";
    std::getline(std::cin, expressao);

    // Verifica se a expressão está balanceada
    if (estaBalanceada(expressao)) {
        std::cout << "A expressao esta balanceada" << std::endl;
    } else {
        std::cout << "A expressao nao esta balanceada" << std::endl;
    }

    return 0;
}
