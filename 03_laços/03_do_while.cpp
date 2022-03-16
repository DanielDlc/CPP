// contagem regressiva usando do while


#include <iostream>

int main()
{
    int contagem_R = 10;
    do
    {
        std::cout << contagem_R << std::endl;
        contagem_R --;
    } while (contagem_R >> 0);
    
    return 0;
}
