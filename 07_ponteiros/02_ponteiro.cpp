// exemplo do uso se ponteiro 

#include <iostream>

int main()
{

    int *ponteiro, valor, variavel;
    valor = 400;
    ponteiro = &valor;
    variavel = *ponteiro;

    std::cout << "Endereco da variavel com um valor: " << &valor << std::endl;
    std::cout << "Lendo o conteudo do ponteiro: " << ponteiro << std::endl;
    std::cout << "Endereco da variavel ponteiro: " << &ponteiro << std::endl;
    std::cout << "Conteudo da variavel apontada pelo ponteiro: " << *ponteiro << std::endl;
    std::cout << "Conteudo da variavel: " << variavel << std::endl;

    return 0;
}
