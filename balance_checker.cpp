#include "balance_checker.h"

bool estaBalanceada(const std::string& expressao) {
    std::stack<char> pilha;

    for (char caractere : expressao) {
        // Verifica se é um delimitador de abertura e empilha
        if (caractere == '(' || caractere == '[' || caractere == '{') {
            pilha.push(caractere);
        } 
        // Verifica se é um delimitador de fechamento
        else if (caractere == ')' || caractere == ']' || caractere == '}') {
            // Se a pilha estiver vazia, já sabemos que não está balanceada
            if (pilha.empty()) return false;

            // Verifica se o topo da pilha corresponde ao delimitador de fechamento atual
            char topo = pilha.top();
            if ((caractere == ')' && topo == '(') ||
                (caractere == ']' && topo == '[') ||
                (caractere == '}' && topo == '{')) {
                pilha.pop(); // Se corresponder, desempilha o topo
            } else {
                return false; // Se não corresponder, não está balanceada
            }
        }
    }

    // Se a pilha estiver vazia, todos os delimitadores foram balanceados
    return pilha.empty();
}
