#include <iostream>

// variável ponteiro
int main()
{
    int valor = 200;
    int *ponteiro = &valor;
    int *ponteiro2 = ponteiro;

    std::cout << "Valor do ponteiro: "<< *ponteiro << std::endl;
    std::cout << "endereço da variável ponteiro: " << ponteiro2 << std::endl;

    return 0;
}