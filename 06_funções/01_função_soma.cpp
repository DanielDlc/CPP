#include <iostream>

// prototipo
void soma();

// funcão principal que chama a função soma
int main()
{
    soma();
    return 0;
}

// declarando a função e as três variáveis para calcular o valor
void soma()
{
    int numero01 = 100;
    int numero02 = 300;
    int resultado = numero01 + numero02;

    std::cout << "O resultado da soma: " << resultado << std::endl;
}