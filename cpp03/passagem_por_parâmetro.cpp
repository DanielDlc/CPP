// passagem de par

#include <iostream>

int f(int x)
{
    x = x+1;
    return x;
}

int main() {
    
    int xx= 0;
    std::cout << f(xx) <<std::endl; // escreve:1
    std::cout << xx <<std::endl;  // escreve: 0; f() não altera xx

    std::cout <<"---------------------------" << std::endl;

    int yy = 7;
    std::cout << f(yy) <<std::endl; // escreve:8
    std::cout << yy <<std::endl;  // escreve: 7; f() não altera yy

    return 0;

}

// passagem de parâmetro para uma função, passamos uma cópia do valor que você usa como argumento. 
//um exemplo de um argumento de uma função f() é uma variável local em f() que é inicializada cada vez que f() é
// chamada.
