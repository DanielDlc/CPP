#include <iostream>

using namespace std;

// variável global.
    int numero01 = 10;
    int numero02 = 90;

int main()
{
    // variável local.
    int resultado;
    resultado = numero01 + numero02;

    cout << resultado;

    return 0;
}