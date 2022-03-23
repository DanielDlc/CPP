// função com argumento

#include <iostream>

// função com argumento subtrair
void subtrair(int numero01, int numero02);

// atribuindo valor01 no parâmetro numero01 e valor02 no parâmetro numero02
int main()
{
    int valor01 = 600;
    int valor02 = 200;
    subtrair(valor01, valor02);
    return 0;
}

void subtrair(int numero01, int numero02)
{
    int resultado = numero01 - numero02;
    std::cout << "o resultado da subtração é: " << resultado << std::endl;
}
