//Passagem por referência

#include <iostream>

int f(int &x)
{
    x = x+1;
    return x;
}

int main() {
    
    int xx= 0;
    std::cout << f(xx) <<std::endl; // escreve: 1 
    std::cout << xx <<std::endl;  // escreve: 1; f() modifica o valor xx

    std::cout <<"---------------------------" << std::endl;

    int yy = 7;
    std::cout << f(yy) <<std::endl; // escreve: 8
    std::cout << yy <<std::endl;  // escreve: 8; f() modifica o valor yy

    return 0;

}

// utilizamos  & ( e comercial )
// podemos fazer uma função operar diretamente sobre qualquer objeto para o
// qual passamos uma referência
